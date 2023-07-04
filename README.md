Sure! Here's an updated version of the README.md file that includes instructions on how to use the API and import the API key into the main.cpp file:

markdown
# Currency Converter

The Currency Converter is a program written in C++ that automates the process of converting currencies. It uses an external library, `libcurl`, for making HTTP requests to retrieve currency exchange rates from an API.

## Features

- Supports conversion between different currencies.
- Retrieves real-time exchange rates from an API.
- Simple and easy-to-use interface.

## Prerequisites

- C++ compiler that supports C++11 or higher.
- `libcurl` library installed on your system.

## Installation

1. Clone the repository or download the source code files.

2. Ensure that `libcurl` is installed on your system. If not, you may need to install it using your system's package manager.

3. Obtain an API key from the currency exchange rate provider. You can sign up on their website to get an API key.

4. In the `config.h` file, define a constant named `API_KEY` and assign your API key to it. The file should look like this:

   ```cpp
   #ifndef API_KEY_H
   #define API_KEY_H

   const std::string API_KEY = "YOUR_API_KEY";

   #endif
   ```

   Replace "YOUR_API_KEY" with your actual API key.

5. Compile the program using your preferred C++ compiler with the following command:

   ```
   g++ main.cpp -lcurl -o currency_converter
   ```

6. Run the executable file generated after compilation:

   ```
   ./currency_converter
   ```

## Usage

1. Launch the program by running the executable file.

2. Follow the on-screen prompts to input the source currency, target currency, and the amount you wish to convert.

3. The program will make an API request to retrieve the exchange rate and calculate the converted amount.

4. The converted amount will be displayed on the screen.

5. Currency Code Of Some Countries:
   - United States Dollar (USD)
   - Euro (EUR)
   - British Pound (GBP)
   - Japanese Yen (JPY)
   - Canadian Dollar (CAD)
   - Australian Dollar (AUD)
   - Swiss Franc (CHF)
   - Chinese Yuan Renminbi (CNY)
   - Indian Rupee (INR)
   - Russian Ruble (RUB)
   - Brazilian Real (BRL)
   - South African Rand (ZAR)
   - Mexican Peso (MXN)
   - New Zealand Dollar (NZD)
   - Swedish Krona (SEK)

## Contributing

Contributions are welcome! If you encounter any issues or have suggestions for improvements, please open an issue or submit a pull request.

## Acknowledgements

- The project utilizes the `libcurl` library for making HTTP requests to retrieve currency exchange rates.
- Special thanks to nlohmann for their JSON library: [https://github.com/nlohmann/json](https://github.com/nlohmann/json)
```

Please make sure to replace "YOUR_API_KEY" in the `api_key.h` file with your actual API key obtained from the currency exchange rate provider.