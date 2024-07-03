/* WAP that prints a character on screen using function overloading */


#include <iostream>
#include <string>

// Function to print a character five times
void f1(char a) {
    for (int i = 0; i < 5; ++i) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

// Function to print a string five times
void f1(const std::string& b) {
    for (int i = 0; i < 5; ++i) {
        std::cout << b << " ";
    }
    std::cout << std::endl;
}

int main() {
    char c;
    std::string d;

    std::cout << "Enter a character: ";
    std::cin >> c;

    std::cout << "Enter a string: ";
    std::cin >> d;

    f1(c);
    f1(d);

    return 0;
}
