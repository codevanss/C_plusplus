#include <iostream>
using namespace std ;
 int main (){
   int age ;
   cout<<"Enter your Age "<<endl;
   cin>>age;
   if(age>=18){
    cout<<"you can vote"<<endl;
 }
 else if(age == 17){
    cout<<"next year you can vote"<<endl;
 }
 else{
    cout<<"you can't vote"<<endl;
 } 
    return 0 ;
 }