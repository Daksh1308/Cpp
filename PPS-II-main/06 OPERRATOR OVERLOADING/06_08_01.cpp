/* Rewrite assignment 1&2(from assignment 6) using +=,-=, *= &
/=operator overloading. */


#include <iostream>
using namespace std;

class complex {
private:
    int real, img; // Real and imaginary parts

public:
    complex();
    void get_data();
    void operator +=(const complex& c);
    void operator -=(const complex& c);
    void operator *=(const complex& c);
    void display() const;
    ~complex();
};

complex::complex() : real(0), img(0) {}

void complex::get_data() {
    cout << "Real part: ";
    cin >> real;
    cout << "Imaginary part: ";
    cin >> img;
}

void complex::operator +=(const complex& c) {
    real += c.real;
    img += c.img;
}

void complex::operator -=(const complex& c) {
    real -= c.real;
    img -= c.img;
}

void complex::operator *=(const complex& c) {
    int temp_real = real * c.real - img * c.img;
    img = real * c.img + img * c.real;
    real = temp_real;
}

void complex::display() const {
    cout << "Complex number: " << real << " + " << img << "i" << endl;
}

complex::~complex() {}

int main() {
    complex c[2];

    // Get data for two complex numbers
    for (int i = 0; i < 2; ++i) {
        cout << "Enter data for complex number " << (i + 1) << ":" << endl;
        c[i].get_data();
    }

    // Perform operations
    c[0] += c[1];   // Addition
    c[0] -= c[1];   // Subtraction
    c[0] *= c[1];   // Multiplication

    // Display the results
    c[0].display();

    return 0;
}
