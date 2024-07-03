/* Create class matrix with following data members
int array[size][size] (size can vary), Use constructors and
destructors properly and for performing various arithmetic
operations write member functions for each of the following
a. Addition function to add two matrices
b. Subtraction function to add two matrices
c. Multiplication function to add two matrices
d. Division function to add two matrices
e. Function to get data and to print data */


#include <iostream>
using namespace std;

class matrix
{
private:
    int a[2][2], ad[2][2], sb[2][2], ml[2][2]; // Matrix and result arrays

public:
    matrix();
    void get_data();
    void add(matrix m[]);
    void sub(matrix m[]);
    void mul(matrix m[]);
    void display();
    ~matrix();
};

matrix::matrix()
{
    // Initialize all matrices to zero
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            a[i][j] = 0;
            ad[i][j] = 0;
            sb[i][j] = 0;
            ml[i][j] = 0;
        }
    }
}

void matrix::get_data()
{
    cout << "Enter matrix elements (2x2):" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
}

void matrix::add(matrix m[])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            ad[i][j] = m[0].a[i][j] + m[1].a[i][j];
        }
    }
}

void matrix::sub(matrix m[])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sb[i][j] = m[0].a[i][j] - m[1].a[i][j];
        }
    }
}

void matrix::mul(matrix m[])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            ml[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                ml[i][j] += m[0].a[i][k] * m[1].a[k][j];
            }
        }
    }
}

void matrix::display()
{
    cout << "Addition:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "\t" << ad[i][j];
        }
        cout << endl;
    }

    cout << "Subtraction:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "\t" << sb[i][j];
        }
        cout << endl;
    }

    cout << "Multiplication:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "\t" << ml[i][j];
        }
        cout << endl;
    }
}

matrix::~matrix()
{
}

int main()
{
    matrix m[2];

    // Get data for two matrices
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter data for matrix " << (i + 1) << ":" << endl;
        m[i].get_data();
    }

    // Perform operations
    m[0].add(m);
    m[0].sub(m);
    m[0].mul(m);

    // Display results
    m[0].display();

    return 0;
}
