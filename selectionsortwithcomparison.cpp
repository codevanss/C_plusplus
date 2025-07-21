#include <iostream>
using namespace std;

void selection_sort(int arr[], int n, int &comparisons) {
    comparisons = 0;

    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            comparisons++;
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main() {
    int a[] = {25, 5, 10, 4, 15, 20, 18, 12, 14, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int comparisons = 0;

    selection_sort(a, n, comparisons);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\nTotal comparisons: " << comparisons << endl;

    return 0;
}
