#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = rows; i >= 1; --i) {
        // Print leading spaces
        for (int space = 0; space < rows - i; ++space) {
            cout << "  ";
        }
        // Print stars
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
