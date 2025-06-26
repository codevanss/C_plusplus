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

    for (int i = 0; i < rows; i++) {
        // Print spaces for formatting
        for (int s = 0; s < rows - i - 1; s++) {
            cout << "  ";
        }

        // Print Pascal's numbers
        for (int j = 0; j <= i; j++) {
            cout << binomial(i, j) << "   ";
        }
        cout << endl;
    }

    return 0;
}
