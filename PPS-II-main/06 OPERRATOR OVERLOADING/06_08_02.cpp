#include <iostream>
using namespace std;

class matrix {
private:
    int a[2][2], ad[2][2], sb[2][2], ml[2][2]; // Member matrices for original, addition, subtraction, and multiplication

public:
    matrix(); // Constructor
    void get_data(); // Method to input matrix data
    void operator+=(matrix m[]); // Operator overloading for +=
    void operator-=(matrix m[]); // Operator overloading for -=
    void operator*=(matrix m[]); // Operator overloading for *=
    void display(); // Display the matrices
    ~matrix(); // Destructor
};

matrix::matrix() {
    // Initialize all matrices to zero
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            a[i][j] = 0;
            ad[i][j] = 0;
            sb[i][j] = 0;
            ml[i][j] = 0;
        }
    }
}

void matrix::get_data() {
    cout << "Enter elements for a 2x2 matrix:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> a[i][j];
        }
    }
}

void matrix::operator+=(matrix m[]) {
    // Accumulate addition result
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            ad[i][j] += m[0].a[i][j] + m[1].a[i][j];
        }
    }
}

void matrix::operator-=(matrix m[]) {
    // Accumulate subtraction result
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            sb[i][j] += m[0].a[i][j] - m[1].a[i][j];
        }
    }
}

void matrix::operator*=(matrix m[]) {
    // Accumulate multiplication result
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            ml[i][j] += m[0].a[i][0] * m[1].a[0][j] + m[0].a[i][1] * m[1].a[1][j];
        }
    }
}

void matrix::display() {
    // Display addition
    cout << "Addition:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << ad[i][j] << "\t";
        }
        cout << endl;
    }

    // Display subtraction
    cout << "Subtraction:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << sb[i][j] << "\t";
        }
        cout << endl;
    }

    // Display multiplication
    cout << "Multiplication:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << ml[i][j] << "\t";
        }
        cout << endl;
    }
}

matrix::~matrix() {}

int main() {
    matrix m[2];

    // Input data for matrices
    for (int i = 0; i < 2; ++i) {
        m[i].get_data();
    }

    // Perform operations
    m[0] += m;
    m[0] -= m;
    m[0] *= m;

    // Display results
    m[0].display();

    return 0;
}
