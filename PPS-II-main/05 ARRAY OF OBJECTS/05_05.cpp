/* Create class complex with following data members real and
imaginary, Use constructors and destructors properly and for
performing various arithmetic operationswrite member functions
for each of the following
a. Addition function to add two complex no
b. Subtraction function to add two complex no
c. Multiplication function to add two complex no
d. Division function to add two complex no
e. Function to get data and to print data */


#include <iostream>
using namespace std;

class complex
{
private:
    int real, img; // Real and imaginary parts

public:
    complex();
    void get_data();
    complex add(complex c);
    complex sub(complex c);
    complex mul(complex c);
    void display();
    ~complex();
};

complex::complex()
    : real(0), img(0)
{
}

void complex::get_data()
{
    cout << "Real: ";
    cin >> real;
    cout << "Imaginary: ";
    cin >> img;
}

complex complex::add(complex c)
{
    complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}

complex complex::sub(complex c)
{
    complex temp;
    temp.real = real - c.real;
    temp.img = img - c.img;
    return temp;
}

complex complex::mul(complex c)
{
    complex temp;
    temp.real = real * c.real - img * c.img;
    temp.img = real * c.img + img * c.real;
    return temp;
}

void complex::display()
{
    cout << "Addition: " << real << " + " << img << "i" << endl;
}

complex::~complex()
{
}

int main()
{
    complex c1, c2, result;
    
    // Input for first complex number
    cout << "Enter details for first complex number:" << endl;
    c1.get_data();
    
    // Input for second complex number
    cout << "Enter details for second complex number:" << endl;
    c2.get_data();

    // Perform addition, subtraction, and multiplication
    result = c1.add(c2);
    
    // Display result of addition
    cout << "Result of Addition:" << endl;
    result.display();

    return 0;
}
