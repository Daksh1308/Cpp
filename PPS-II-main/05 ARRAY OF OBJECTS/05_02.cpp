/* Create class book with following data members book name,
author name, Qty, price
Read data for 10 books, Use constructors and destructors properly
and write member function for each of the following
a. To get the data
b. To display the data
c. To find total price (i.e. qty * price)
d. Sort it according to the total price */


#include <iostream>
#include <string>
#include <algorithm> // for std::sort
using namespace std;

class Book
{
public:
    string bookname;
    string authorname;
    int qty;
    int pr;

    Book(); // Constructor
    void get_data();
    void display_data() const;
    int calculate_total_price() const;

    // Static function to sort an array of Book objects by price
    static void sort_books(Book b[], int size);
};

Book::Book()
    : qty(0), pr(0), bookname(""), authorname("")
{
    // Constructor initializing member variables
}

void Book::get_data()
{
    cout << "Book Name: ";
    cin >> bookname;
    cout << "Author Name: ";
    cin >> authorname;
    cout << "Quantity: ";
    cin >> qty;
    cout << "Price: ";
    cin >> pr;
}

void Book::display_data() const
{
    cout << "\nBook Details:\n";
    cout << "Book Name: " << bookname << endl;
    cout << "Author Name: " << authorname << endl;
    cout << "Quantity: " << qty << endl;
    cout << "Total Price: " << calculate_total_price() << endl;
}

int Book::calculate_total_price() const
{
    return pr * qty;
}

void Book::sort_books(Book b[], int size)
{
    // Sort books by price using std::sort and a lambda function
    std::sort(b, b + size, [](const Book &a, const Book &b) {
        return a.pr < b.pr;
    });
}

int main()
{
    Book b[10];

    // Input data for each book
    for (int i = 0; i < 10; i++)
    {
        cout << "\nEnter details for book " << i + 1 << ":\n";
        b[i].get_data();
    }

    // Sort books by price
    Book::sort_books(b, 10);

    // Display data for each book after sorting
    for (int i = 0; i < 10; i++)
    {
        b[i].display_data();
    }

    return 0;
}
