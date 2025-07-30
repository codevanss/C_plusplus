#include <iostream>
using namespace std;

int main() {
    int c, ch;

    cout << "Choose the amount in INR: ";
    cin >> c;

    cout << "\nSelect the currency to convert to:\n";
    cout << "1. Dollar\n";
    cout << "2. Turkish Lira\n";
    cout << "3. Yuan\n";
    cout << "4. Pound\n";
    cout << "5. Won\n";
    cout << "6. Euro\n";
    cout << "Enter your choice (1-6): ";
    cin >> ch;

    switch (ch) {
        case 1:
            cout << "INR to Dollar = " << c / 80 << endl;
            break;
        case 2:
            cout << "INR to Turkish Lira = " << c / 76 << endl;
            break;
        case 3:
            cout << "INR to Yuan = " << c / 60 << endl;
            break;
        case 4:
            cout << "INR to Pound = " << c / 77 << endl;
            break;
        case 5:
            cout << "INR to Won = " << c / 86 << endl;
            break;
        case 6:
            cout << "INR to Euro = " << c / 81 << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
