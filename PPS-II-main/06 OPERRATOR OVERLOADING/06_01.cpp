/* Rewrite complex class (from assignment 5) using operator
overloading concept. i.e. overload (+,-,*,/)
 */

#include <iostream>
using namespace std;

class complex
{
private:
    int real, img; // Private member variables for real and imaginary parts

public:
    complex(); // Constructor
    void get_data(); // Method to input complex number
    complex operator +(const complex& c); // Overloading + operator
    complex operator -(const complex& c); // Overloading - operator
    complex operator *(const complex& c); // Overloading * operator
    void display(); // Method to display complex number
    ~complex(); // Destructor
};

complex::complex()
{
    real = 0;
    img = 0;
}

void complex::get_data()
{
    cout << "Real: ";
    cin >> real;
    cout << "Imaginary: ";
    cin >> img;
}

// Overloading + operator
complex complex::operator +(const complex& c)
{
    complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}

// Overloading - operator
complex complex::operator -(const complex& c)
{
    complex temp;
    temp.real = real - c.real;
    temp.img = img - c.img;
    return temp;
}

// Overloading * operator
complex complex::operator *(const complex& c)
{
    complex temp;
    temp.real = real * c.real - img * c.img;
    temp.img = real * c.img + img * c.real;
    return temp;
}

void complex::display()
{
    cout << "Complex Number: " << real << " + " << img << "i" << endl;
}

complex::~complex()
{
    // Destructor
}

int main()
{
    complex c1, c2, result;

    cout << "Enter first complex number:" << endl;
    c1.get_data();

    cout << "Enter second complex number:" << endl;
    c2.get_data();

    // Addition
    result = c1 + c2;
    cout << "Addition:" << endl;
    result.display();

    // Subtraction
    result = c1 - c2;
    cout << "Subtraction:" << endl;
    result.display();

    // Multiplication
    result = c1 * c2;
    cout << "Multiplication:" << endl;
    result.display();

    return 0;
}
