#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = rows; i >= 1; --i) {
        // Print leading spaces
        for (int space = 1; space <= rows - i; ++space) {
            cout << "  ";
        }

        // Print increasing numbers
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }

        // Print decreasing numbers
        for (int j = i - 1; j >= 1; --j) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
