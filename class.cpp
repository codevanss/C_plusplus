#include <iostream>
using namespace std;
class abc
{
// private:
//     int a, b;

public:
    // void data()
    // {
    //     cout << "Enter two number";
    //     cin >> a >> b;
    // }
    void display(int x , int y )
    {
        
        cout << "\nThe value of a is " << x;
        cout << "\nThe value of b is " << y;
        cout << "\nThe sum is " << x + y;
    }
};
int main()
{
    abc a1;
    int a ,b ;
    cout<<"Enter numbers";
    cin>>a>>b;
    //a1.data();
    a1.display(a,b);

    return 0;
}