/* WAP that prints various types of data using function overloading. */


#include <iostream>

// Function to print an integer six times
void f1(int a) {
    for (int i = 0; i < 6; ++i) {
        std::cout << a << " ";
    }
}

// Function to print a float six times
void f1(float b) {
    for (int i = 0; i < 6; ++i) {
        std::cout << b << " ";
    }
}

// Function to print a char six times
void f1(char c) {
    for (int i = 0; i < 6; ++i) {
        std::cout << c << " ";
    }
}

int main() {
    int d;
    float e;
    char f;

    std::cout << "Enter an integer: ";
    if (!(std::cin >> d)) {
        std::cerr << "Invalid input. Please enter an integer." << std::endl;
        return 1;
    }

    std::cout << "Enter a float: ";
    if (!(std::cin >> e)) {
        std::cerr << "Invalid input. Please enter a float." << std::endl;
        return 1;
    }

    std::cout << "Enter a character: ";
    std::cin >> f;

    // Print the values using overloaded functions
    f1(d);
    std::cout << std::endl;
    f1(e);
    std::cout << std::endl;
    f1(f);
    std::cout << std::endl;

    return 0;
}
