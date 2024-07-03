/* WAP to add two matrices using default argument. */


#include <iostream>
#include <array>

using Matrix2x2 = std::array<std::array<int, 2>, 2>;

// Function to read a 2x2 matrix from input
void readMatrix(Matrix2x2& matrix, const std::string& name) {
    std::cout << "Matrix " << name << ":\n";
    for (auto& row : matrix) {
        for (auto& element : row) {
            std::cin >> element;
        }
    }
}

// Function to add two 2x2 matrices
Matrix2x2 addMatrices(const Matrix2x2& a, const Matrix2x2& b) {
    Matrix2x2 result;
    for (size_t i = 0; i < 2; ++i) {
        for (size_t j = 0; j < 2; ++j) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    return result;
}

// Function to display a 2x2 matrix
void displayMatrix(const Matrix2x2& matrix, const std::string& name) {
    std::cout << name << ":\n";
    for (const auto& row : matrix) {
        for (const auto& element : row) {
            std::cout << '\t' << element;
        }
        std::cout << '\n';
    }
}

int main() {
    Matrix2x2 matrixA, matrixB;

    // Read matrices A and B
    readMatrix(matrixA, "A");
    readMatrix(matrixB, "B");

    // Add matrices A and B
    Matrix2x2 matrixSum = addMatrices(matrixA, matrixB);

    // Display the result
    displayMatrix(matrixSum, "Addition of A & B");

    return 0;
}
