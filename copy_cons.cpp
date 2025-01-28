#include <iostream>
#include <conio.h>
using namespace std;
class abc
{
    int id;

public:
    abc(int x)
    {
        id = x;
    }

    abc(abc &a)
    {
        id = a.id;
    }
    void display()
    {
        cout << id;
    }
};
int main()
{
    abc a1(10);
    abc a2(a1);
    a2.display();

    getch();
    return 0;
}