#include <iostream>
using namespace std;

int main() {
    int a[] = {27, 5, 10, 8, 16, 2, 37};
    int n = 7, comparisons = 0;


    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;
            if (a[j] > a[j + 1]) {

                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\nTotal comparisons: " << comparisons << endl;

    return 0;
}
