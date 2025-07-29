#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1, c;

    cout << "Fibonacci Series: " << a << " " << b << " ";

    for (int i = 2; i < 10; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}
