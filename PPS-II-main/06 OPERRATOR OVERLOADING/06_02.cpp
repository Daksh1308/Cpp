/* Rewrite matrix class (from assignment 5) using operator
overloading concept. i.e. overload (+,-,*,/) */

#include <iostream>
using namespace std;

class matrix {
private:
    int a[2][2];
    int ad[2][2];
    int sb[2][2];
    int ml[2][2];

public:
    matrix();  // Constructor
    void get_data();
    matrix operator+(const matrix& m);
    matrix operator-(const matrix& m);
    matrix operator*(const matrix& m);
    void display();
};

matrix::matrix() {
    // Initialize all matrices to zero
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            a[i][j] = ad[i][j] = sb[i][j] = ml[i][j] = 0;
        }
    }
}

void matrix::get_data() {
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> a[i][j];
        }
    }
}

matrix matrix::operator+(const matrix& m) {
    matrix result;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            result.ad[i][j] = this->a[i][j] + m.a[i][j];
        }
    }
    return result;
}

matrix matrix::operator-(const matrix& m) {
    matrix result;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            result.sb[i][j] = this->a[i][j] - m.a[i][j];
        }
    }
    return result;
}

matrix matrix::operator*(const matrix& m) {
    matrix result;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            result.ml[i][j] = 0;
            for (int k = 0; k < 2; ++k) {
                result.ml[i][j] += this->a[i][k] * m.a[k][j];
            }
        }
    }
    return result;
}

void matrix::display() {
    cout << "Addition:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "\t" << ad[i][j];
        }
        cout << endl;
    }

    cout << "Subtraction:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "\t" << sb[i][j];
        }
        cout << endl;
    }

    cout << "Multiplication:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "\t" << ml[i][j];
        }
        cout << endl;
    }
}

int main() {
    matrix m[2];

    // Input data for matrices
    for (int i = 0; i < 2; ++i) {
        cout << "Enter data for matrix " << (i + 1) << ":" << endl;
        m[i].get_data();
    }

    // Perform operations
    matrix addition = m[0] + m[1];
    matrix subtraction = m[0] - m[1];
    matrix multiplication = m[0] * m[1];

    // Display results
    cout << "Results:" << endl;
    addition.display();
    subtraction.display();
    multiplication.display();

    return 0;
}
