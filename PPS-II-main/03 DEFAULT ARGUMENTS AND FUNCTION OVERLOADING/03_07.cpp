/* Write overloaded functions to convert ascii to int and ascii to
float. */


#include <iostream>
#include <iomanip>

// Function to print integer equivalent of a character
void f1(char c, int i) {
    i = static_cast<int>(c);
    std::cout << "1. " << i << std::endl;
}

// Function to print float equivalent of a character
void f2(char c, float f) {
    f = static_cast<float>(c);
    std::cout << "2. " << std::fixed << std::setprecision(2) << f << std::endl;
}

int main() {
    float f = 0.0;
    int i = 0;
    char c;

    // Input character
    std::cout << "Enter a character: ";
    std::cin >> c;

    // Call functions with character
    f1(c, i);
    f2(c, f);

    return 0;
}
