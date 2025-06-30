#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    int f = 1;
    for (int i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}

// Function to calculate binomial coefficient (nCr)
int binomial(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = rows - 1; i >= 0; i--) {
        // Print leading spaces
        for (int s = 0; s < rows - i - 1; s++) {
            cout << "  ";
        }

        // Print binomial coefficients
        for (int j = 0; j <= i; j++) {
            cout << binomial(i, j) << "   ";
        }
        cout << endl;
    }

    return 0;
}
