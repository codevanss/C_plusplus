#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    // Calculate the starting number for the last row
    int start = 1;
    for (int i = 1; i <= rows; i++) {
        start++;
    }

    start--; // Adjust to correct starting value for last row

    // Print the reverse pattern
    for (int i = rows; i >= 1; i--) {
        int num = start;
        for (int j = 0; j < i; j++) {
            cout << num << " ";
            num -= (i - j);
        }
        cout << endl;
        start--;
    }

    return 0;
}
