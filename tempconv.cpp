#include <iostream>

using namespace std;

// Function prototypes
double celsiusToFahrenheit(double celsius);
double celsiusToKelvin(double celsius);

double fahrenheitToCelsius(double fahrenheit);
double fahrenheitToKelvin(double fahrenheit);

double kelvinToCelsius(double kelvin);
double kelvinToFahrenheit(double kelvin);

int main() {
    double temperature;
    char unit;

    // Get temperature and unit from the user
    cout << "Enter temperature: ";
    cin >> temperature;

    cout << "Enter unit (C, F, or K): ";
    cin >> unit;

    // Convert temperature based on the unit provided
    switch (unit) {
        case 'C':
        case 'c':
            cout << "Fahrenheit: " << celsiusToFahrenheit(temperature) << " F\n";
            cout << "Kelvin: " << celsiusToKelvin(temperature) << " K\n";
            break;
        case 'F':
        case 'f':
            cout << "Celsius: " << fahrenheitToCelsius(temperature) << " C\n";
            cout << "Kelvin: " << fahrenheitToKelvin(temperature) << " K\n";
            break;
        case 'K':
        case 'k':
            cout << "Celsius: " << kelvinToCelsius(temperature) << " C\n";
            cout << "Fahrenheit: " << kelvinToFahrenheit(temperature) << " F\n";
            break;
        default:
            cout << "Invalid unit entered.\n";
            return 1; // Exit program with an error code
    }

    return 0; // Exit program successfully
}

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0/5.0) + 32.0;
}

// Function to convert Celsius to Kelvin
double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0/9.0;
}

// Function to convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0/9.0 + 273.15;
}

// Function to convert Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

// Function to convert Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9.0/5.0 + 32.0;
}
