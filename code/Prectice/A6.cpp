#include <iostream>
#include <queue>

using namespace std;

// Class to represent Celsius temperature
class Celsius {
public:
    Celsius(double value) : value_(value) {}

    // Conversion operator to Fahrenheit
    operator double() const {
        return (value_ * 9.0 / 5.0) + 32.0;
    }

    // Equality operator
    bool operator==(const Celsius& other) const {
        return value_ == other.value_;
    }

    // Get the value of the temperature
    double getValue() const {
        return value_;
    }

private:
    double value_;
};

// Class to represent Fahrenheit temperature
class Fahrenheit {
public:
    Fahrenheit(double value) : value_(value) {}

    // Conversion operator to Celsius
    operator double() const {
        return (value_ - 32.0) * 5.0 / 9.0;
    }

    // Equality operator
    bool operator==(const Fahrenheit& other) const {
        return value_ == other.value_;
    }

    // Get the value of the temperature
    double getValue() const {
        return value_;
    }

private:
    double value_;
};

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(const Celsius& celsius) {
    return celsius;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(const Fahrenheit& fahrenheit) {
    return fahrenheit;
}

// Function to compare two temperature objects
bool areTemperaturesEqual(const Celsius& celsius, const Fahrenheit& fahrenheit) {
    return celsiusToFahrenheit(celsius) == fahrenheitToCelsius(fahrenheit);
}

int main() {
    // Create a queue to store the converted temperature objects
    queue<double> celsiusQueue;
    queue<double> fahrenheitQueue;

    // Create temperature objects
    Celsius celsius(30.0);
    Fahrenheit fahrenheit(86.0);

    // Convert Celsius to Fahrenheit and store in queue
    double convertedFahrenheit = celsiusToFahrenheit(celsius);
    fahrenheitQueue.push(convertedFahrenheit);

    // Convert Fahrenheit to Celsius and store in queue
    double convertedCelsius = fahrenheitToCelsius(fahrenheit);
    celsiusQueue.push(convertedCelsius);

    // Compare two temperature objects
    bool areEqual = areTemperaturesEqual(celsius, fahrenheit);
    cout << "Are temperatures equal? " << (areEqual ? "Yes" : "No") << endl;

    // Process the converted temperature objects in the queues
    while (!celsiusQueue.empty()) {
        double celsius = celsiusQueue.front();
        cout << "Celsius: " << celsius << endl;
        celsiusQueue.pop();
    }

    while (!fahrenheitQueue.empty()) {
        double fahrenheit = fahrenheitQueue.front();
        cout << "Fahrenheit: " << fahrenheit << endl;
        fahrenheitQueue.pop();
    }

    return 0;
}