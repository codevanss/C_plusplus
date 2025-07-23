#include <iostream>
using namespace std;

int main() {
    int arr[] = {9, 15, 22, 5, 4, 25, 28};
    int x = 28;
    bool found = false;

    for (int i = 0; i < 7; i++) {
        if (arr[i] == x) {
            found = true;
            cout << "Element " << x << " found at index " << i << endl;
            break;
        }
    }

    if (!found)
        cout << "Element not found." << endl;

    return 0;
}
