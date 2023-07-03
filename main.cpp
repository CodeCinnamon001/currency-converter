#include <iostream>
#include <string>
#include <curl/curl.h>
#include "json.hpp"

using json = nlohmann::json;

// Callback function to receive API response
size_t CurlCallback(void* contents, size_t size, size_t nmemb, std::string* response) {
    size_t totalSize = size * nmemb;
    response->append((char*)contents, totalSize);
    return totalSize;
}

// Function to perform API request
std::string FetchExchangeRates() {
    std::string apiUrl = "https://api.exchangerate-api.com/v4/latest/USD";

    CURL* curl = curl_easy_init();
    std::string response;

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, apiUrl.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, CurlCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

        CURLcode res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            std::cerr << "Failed to fetch exchange rates. Error: " << curl_easy_strerror(res) << std::endl;
        }

        curl_easy_cleanup(curl);
    }

    return response;
}

// Function to convert currency
double ConvertCurrency(double amount, double exchangeRate) {
    return amount * exchangeRate;
}

int main() {
    std::string apiResponse = FetchExchangeRates();

    if (!apiResponse.empty()) {
        json exchangeData = json::parse(apiResponse);

        // User input
        double amount;
        std::string fromCurrency, toCurrency;

        // Get user input
        std::cout << "Enter amount: ";
        std::cin >> amount;
        std::cout << "Enter currency to convert from (e.g., USD): ";
        std::cin >> fromCurrency;
        std::cout << "Enter currency to convert to (e.g., EUR): ";
        std::cin >> toCurrency;

        // Check if the conversion rates are available
        if (exchangeData.contains("rates")) {
            double fromRate = exchangeData["rates"].value(fromCurrency, 0.0);
            double toRate = exchangeData["rates"].value(toCurrency, 0.0);

            if (fromRate != 0.0 && toRate != 0.0) {
                double convertedAmount = ConvertCurrency(amount, toRate / fromRate);

                // Print the result
                std::cout << amount << " " << fromCurrency << " is equivalent to " << convertedAmount << " " << toCurrency << std::endl;
            } else {
                std::cout << "Unsupported conversion." << std::endl;
            }
        }
    } else {
        std::cout << "Failed to fetch exchange rates." << std::endl;
    }

    return 0;
    }
