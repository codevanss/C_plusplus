#include <iostream>
using namespace std ;

int add(int a , int b){
    int c ;
    c = a+b;
    return c ;
}


int main(){
 int a , b ;

   cout<<"Enter first number"<<endl;
   cin>>a;

   cout<<"Enter second number"<<endl;
   cin>>b;

   cout<<"The function return "<<add(a,b);

    return 0 ;
}