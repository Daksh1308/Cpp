/* Create a class item with the following data members item
code, cost, qty, total_price
Write member functions for each of the following
a. To get the data
b. To display the data
c. To calculate the total price of the item */


#include <iostream>
using namespace std;

class Item
{
public:
    int code;
    float cost;
    float quantity;
    float price;

    // Constructor
    Item() : code(0), cost(0.0), quantity(0.0), price(0.0) {}

    void getData();
    void calculateTotalPrice();
    void displayData() const;
};

void Item::getData()
{
    cout << "Enter item code (integer): ";
    while (!(cin >> code))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter an integer for item code: ";
    }

    cout << "Enter cost per item: ";
    while (!(cin >> cost) || cost < 0)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a non-negative value for cost: ";
    }

    cout << "Enter quantity: ";
    while (!(cin >> quantity) || quantity < 0)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a non-negative value for quantity: ";
    }
}

void Item::calculateTotalPrice()
{
    price = cost * quantity;
}

void Item::displayData() const
{
    cout << "\nItem details:\n";
    cout << "Item code: " << code << endl;
    cout << "Cost per item: " << cost << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Total price: " << price << endl;
}

int main()
{
    Item i1;
    i1.getData();
    i1.calculateTotalPrice();
    i1.displayData();
    return 0;
}

