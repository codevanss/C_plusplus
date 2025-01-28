#include<iostream>
#include<conio.h>
using namespace std;

class cons{
    private:
    int a ,b;

    public:
    cons(){
        cout<<"Constructor Invoked\n";
    }
    cons(int x , int y){
       
        a=x;
        b=y;
    }
    void display(){
         int s ;
        s = a+b;
        cout<<"The sum is " <<s;
    }
    ~cons(){
        cout<<"\nConstructor destroyed Successfully";
    }
};
int main(){
 cons c1;
 cons c2(10,20);
 c2.display();
 getch();
 return 0 ;
}