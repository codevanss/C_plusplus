#include <iostream>
#include <conio.h>
using namespace std;
class complex
{
private:
    float real;
    float img;

public:
    complex()
    {
        real = img = 0.0;
    }
    void getdata()
    {
        cout << "\nReal Part";
        cin >> real;
        cout << "\nImg Part";
        cin >> img;
    }
    void display()
    {
        cout << "\nReal value is " << real;
        cout << "\nImg value is " << img;
    }
    complex operator+(complex c2);
};
complex complex::operator+(complex c2)
{
    complex temp;
    temp.real = real + c2.real;
    temp.img = img + c2.img;
    return (temp);
}
int main()
{
    complex c1, c2, c3;
    cout << "Enter Complex Number C1" << endl;
    c1.getdata();
    cout << "\nEnter Complex C2" << endl;
    c2.getdata();
    c3 = c1 + c2;
    c3.display();

    getch();
    return 0;
}