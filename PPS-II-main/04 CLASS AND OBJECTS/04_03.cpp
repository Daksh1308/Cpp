/* Create a class book with following data members
bookname, authorname, rate, qty
Write member functions for each of the following
a. To get the data
b. To display the data
c. To calculate the total price of the book */


#include <iostream>
#include <string>

class Book {
public:
    std::string bookName;
    std::string authorName;
    int rate;
    int quantity;

    void getData();
    void displayData() const;
    int calculatePrice() const;
};

void Book::getData() {
    std::cout << "Book Name: ";
    std::getline(std::cin, bookName); // Use getline to handle spaces
    std::cout << "Author Name: ";
    std::getline(std::cin, authorName); // Use getline to handle spaces
    std::cout << "Rate: ";
    std::cin >> rate;
    std::cout << "Quantity: ";
    std::cin >> quantity;
}

void Book::displayData() const {
    std::cout << "Book Name: " << bookName << std::endl;
    std::cout << "Author Name: " << authorName << std::endl;
    std::cout << "Rate: " << rate << std::endl;
    std::cout << "Quantity: " << quantity << std::endl;
    std::cout << "Total Price: " << calculatePrice() << std::endl;
}

int Book::calculatePrice() const {
    return rate * quantity;
}

int main() {
    Book b1;
    b1.getData();
    b1.displayData();
    return 0;
}
