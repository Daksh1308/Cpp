/* Declare a class catalog with following data members title,author,
year_of_publication, no_of_copies
create array of 15 objects, Use constructors and destructors
properly and write member function for each of the following
a. To get the data
b. To display the data
c. To search the particular title, if exists then display that
particular record */


#include <iostream>
#include <string>

class Catalogue {
private:
    std::string title;
    std::string author;
    int year;
    int qty;

public:
    Catalogue();
    void getData();
    void display() const;
    void search(const Catalogue c[], int size, const std::string& s) const;
};

Catalogue::Catalogue() : title(""), author(""), year(0), qty(0) {}

void Catalogue::getData() {
    std::cout << "Title: ";
    std::getline(std::cin, title);
    std::cout << "Author: ";
    std::getline(std::cin, author);
    std::cout << "Year: ";
    std::cin >> year;
    std::cout << "No. of copies: ";
    std::cin >> qty;
    std::cin.ignore(); // Ignore newline left by std::cin for getline
}

void Catalogue::display() const {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "No. of copies: " << qty << std::endl;
}

void Catalogue::search(const Catalogue c[], int size, const std::string& s) const {
    bool found = false;
    for (int i = 0; i < size; ++i) {
        if (c[i].title == s) {
            found = true;
            c[i].display();
            break; // Once found, no need to search further
        }
    }
    if (!found) {
        std::cout << "Catalogue not found." << std::endl;
    }
}

int main() {
    Catalogue c[15];
    int numCatalogs = 2; // Adjust based on how many catalog entries you want to input

    // Input catalog data
    for (int i = 0; i < numCatalogs; ++i) {
        std::cout << "Enter details for Catalog " << i + 1 << ":" << std::endl;
        c[i].getData();
    }

    // Search for a catalog
    std::string searchTitle;
    std::cout << "Enter the title to search: ";
    std::getline(std::cin, searchTitle);

    c[0].search(c, numCatalogs, searchTitle);

    return 0;
}
