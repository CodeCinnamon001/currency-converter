
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

3. Compile the program using your preferred C++ compiler with the following command:
   ```
   g++ main.cpp -lcurl -o currency_converter
   ```

4. Run the executable file generated after compilation:
   ```
   ./currency_converter
   ```

## Usage

1. Launch the program by running the executable file.

2. Follow the on-screen prompts to input the source currency, target currency, and the amount you wish to convert.

3. The program will make an API request to retrieve the exchange rate and calculate the converted amount.

4. The converted amount will be displayed on the screen.


## Contributing

Contributions are welcome! If you encounter any issues or have suggestions for improvements, please open an issue or submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).

## Acknowledgements

- The project utilizes the `libcurl` library for making HTTP requests to retrieve currency exchange rates.
- Special thanks to nlohmann whose json api has been used in this project
**https://github.com/nlohmann/json**
