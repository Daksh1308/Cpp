/* WA function called zero smaller() uses two arguments. Use
return by reference to the function concept and set a smaller value
to 0. */


#include <iostream>

// Function to set the smaller of the two values to zero
void zeroSmaller(int &a, int &b) {
    if (a > b) {
        b = 0;
    } else {
        a = 0;
    }
}

int main() {
    int num1, num2;

    // Prompt user for input
    std::cout << "Enter the first number (C): ";
    if (!(std::cin >> num1)) {
        std::cerr << "Invalid input. Please enter an integer." << std::endl;
        return 1;
    }

    std::cout << "Enter the second number (D): ";
    if (!(std::cin >> num2)) {
        std::cerr << "Invalid input. Please enter an integer." << std::endl;
        return 1;
    }

    // Call the function to zero the smaller number
    zeroSmaller(num1, num2);

    // Output the results
    std::cout << "After processing:\n";
    std::cout << "C: " << num1 << std::endl;
    std::cout << "D: " << num2 << std::endl;

    return 0;
}
