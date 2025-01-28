// #include <iostream>

// int main()
// {
//     std::cout << "Jai Shree Ram\n";
//     std::cout << "\n";
//     // std::cout << "Welcome to c++ language\n ";
//     // std::cout << "* \t * \t * \n  \t * \n  \t * \n * \t * \t * \n " ;
//     // std::cout << "YO" ;

//     // int a , b;
//     // int  sum = a + b ;

//     // std::cout << "Enter your First Number \n";
//     // std::cin >> a;

//     // std::cout << "Enter your Second Number \n";
//     // std::cin >> b;

//     // int sum = a + b;
//     // std::cout << "The sum of two number is " << sum << " Thats your answer \n";
//     // std::cout << "The sum of two number is " << a + b << " Thats your answer \n ";

//     // int mul = a * b;
//     // std::cout << "The mul of two number is " << mul << " Thats your answer \n";
//     // std::cout << "The mul of two number is " << a * b << " Thats your answer \n ";

//     // int div = a / b;
//     // std::cout << "The mul of two number is " << div << " Thats your answer \n";
//     // std::cout << "The mul of two number is " << a / b << " Thats your answer ";

//     int Maths, Science, English, Accounts;

//     std::cout << "Enter the Marks of Maths \n";
//     std::cin >> Maths;
//     std::cout << "Enter the Marks of Science \n";
//     std::cin >> Science;

//     std::cout << "Enter the Marks of English \n";
//     std::cin >> English;

//     std::cout << "Enter the Marks of Accounts; \n";
//     std::cin >> Accounts;

//     int sum = Maths + Science + English + Accounts;
//     std::cout << "The total number you get in your exam is " << Maths + Science + English + Accounts << "\n";
//     std::cout << "The total number you get in your exam is " << sum << "\n";

//     float percentage = (float)(Maths + Science + English + Accounts) / 4;
//     std::cout << "The percentage you get in your exam is " << (float)(Maths + Science + English + Accounts) / 4 << "\n";
//     std::cout << "The percentage you get in your exam is " << percentage << "\n";

//     if (percentage>=33)
//     {
//         std::cout<<"You Are Pass \n";
//     }
//     else{std::cout<<"You Morron\n"; }
    
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class student{
//     public:
//     char name[5];
//     double long enrollment;
//     float marks;

//     void data(){
//         cout<<"Enter your Name \n";
//         cin>>name;

//         cout<<"Enter Your Enrollment number\n";
//         cin>>enrollment;

//         cout<<"Enter Your Total marks\n";
//         cin>>marks;

//     }

//     void display(){
//      cout<<"\nYour Name is "<<name;
//      cout<<"\nYour Enrollment number is "<<enrollment;
//      cout<<"\nYour Marks is "<<marks;

//      if (marks>=200)
//      {
//         cout<<"\n YOU ARE PASS";
//      }
//      else{
//         cout<<"\n YOU ARE FAIL";
//      }
     

//     }
// };
// int main(){
// student A1;
// A1.data();
// A1.display();
// return 0;
// }
#include<iostream>
using namespace std ;
class student{
   private:
   char name[10];
   double long enrollment;
   float marks;

   public:
   void display (char name[] , double long enrollment , float );


};

void student:: display(char name[] , double long enrollment , float){
    cout<<"\n Your name is "<<name;
    cout<<"\nYour enrollment is "<<enrollment;
    cout<<"\nYour marks is "<<marks;
}
int main(){
    student a1;
    a1.display("Vansh" , 22511 , 69.69);
    
    return 0 ;
    }