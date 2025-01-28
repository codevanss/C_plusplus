// UNINARY 
#include<iostream>
#include<conio.h>
using namespace std;
class uninary{
    private:
    int value;
    public:
    
    uninary(){
        value = 0;
    }

    int getvalue(){
        return value ;
    }

    void operator++(){
        value++;
    }
};
int main(){
uninary u1,u2;
cout<<"\nThe Value of U1 -  "<<u1.getvalue();
cout<<"\nThe Value of U2 -  "<<u2.getvalue();
++u1;
++u2;
cout<<"\nThe Value of U1 -  "<<u1.getvalue();
cout<<"\nThe Value of U2 -  "<<u2.getvalue();
 getch();
 return 0 ;
}