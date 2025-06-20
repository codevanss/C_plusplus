#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    int start = 1;

    for (int i = 1; i <= rows; i++) {
        int num = start;
        for (int j = 0; j < i; j++) {
            cout << num << " ";
            num -= (i - j);
        }
        cout << endl;
        start++;
    }

    return 0;
}
