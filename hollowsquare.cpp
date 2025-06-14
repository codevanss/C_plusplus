#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print '*' at the borders
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
