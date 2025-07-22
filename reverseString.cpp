#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100] = "hello";
    int len = strlen(str);
    char temp;

    for (int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    cout << "Reversed string: " << str << endl;

    return 0;
}
