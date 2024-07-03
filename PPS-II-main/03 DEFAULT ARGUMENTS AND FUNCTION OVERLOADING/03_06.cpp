/* WA function power() to raise a number m to power n. The
function takes a double value for m and int value for n, and
returns the value (results) correctly. Use default argument 2 for n
and m to make a function to calculate squares when argument is
not passed. WAP for the same. */


#include <iostream>

// Function to calculate the power of a number
double power(double base, int exponent = 2) {
    double result = 1.0;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    double number;
    int exponent;
    double answer;

    // Input number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Input exponent
    std::cout << "Enter an exponent: ";
    std::cin >> exponent;

    // Calculate and print result
    answer = power(number, exponent);
    std::cout << "Result: " << answer << std::endl;

    // Calculate and print result with default exponent
    answer = power(number);
    std::cout << "Result (with default exponent): " << answer << std::endl;

    return 0;
}
