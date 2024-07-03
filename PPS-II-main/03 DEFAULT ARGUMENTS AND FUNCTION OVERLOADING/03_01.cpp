/* AP to print following using default arguments
repchar() // prints 45 times asterisks (*)
repchar ('=) // prints 45 times (=)
repchar('+',30) // prints 30 times (+) */

#include <iostream>

void repeatCharacter(char character = '*', int count = 45) {
    if (count < 0) {
        std::cerr << "Error: The count cannot be negative." << std::endl;
        return;
    }
    for (int i = 0; i < count; ++i) {
        std::cout << character;
    }
    std::cout << std::endl;
}

int main() {
    repeatCharacter();
    repeatCharacter('=');
    repeatCharacter('+', 30);
    return 0;
}
