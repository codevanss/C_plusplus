#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows (odd number recommended): ";
    cin >> rows;

    // Upper half
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            if (j == i || j == rows - i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
