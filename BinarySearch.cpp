#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20, 22, 27, 30, 35};
    int low = 0, high = 7, mid, x = 22, comparisons = 0;

    while (low <= high) {
        comparisons++;
        mid = (low + high) / 2;
        if (arr[mid] == x) {
            cout << "Element " << x << " found at index " << mid << endl;
            cout << "Comparisons: " << comparisons << endl;
            return 0;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << "Element not found." << endl;
    return 0;
}
