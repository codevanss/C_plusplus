#include <iostream>
using namespace std;

int main()
{

    int age;
    cout << "Enter Your Age " << endl;
    cin >> age;

    switch (age)
    {
    case 12:
        cout << "Your Age is 12 " << endl;
        break;
    case 18:
        cout << "Your Age is 18 " << endl;
    default:
        cout << "You are neither 12 nor 18" << endl;
        break;
    }

    return 0;
}