#include <iostream>
#include <conio.h>
using namespace std;
int add(int, int);
float add(float, int);
int add(int, int, int);
int main()
{
    int a, b, c, res;
    float r, re;
    cout << "Enter Three Integers - ";
    cin >> a>>b>> c;
    cout << "Enter float value";
    cin >> r>> re;

    res = add(a, b);
    cout << "\n"
         << res;

    re = add(r, a);
    cout << "\n"
         << re;

    res = add(a, b, c);
    cout << "\n"
         << res;

    getch();
    return 0;
}
int add(int x, int y)
{
    return x + y;
}

float add(float x, int y)
{
    return x + (float)y;
}
int add(int x, int y, int z)
{
    return x + y + z;
}