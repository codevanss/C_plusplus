#include<iostream>
#include<conio.h>
using namespace std;
class bank{
  public:
       
       double acc_no;
       int Amt_withdraw;
       int Amt_deposit;
       char Acc_type[10];
       char name[50];
       double bal = 0;

    void getdetails(){
        cout<< "Enter your name \n" ; 
        cin>>name;
        cout<<"\n Enter Account Number \n";
        cin>>acc_no;
        cout<<"\nEnter Account type \n";
        cin>>Acc_type;
    }

    void deposit(){
        cout<<"\nEnter The value you want to Deposit\n";
        cin>>Amt_deposit;
        if (0>=Amt_deposit)
        {
            cout<<"\nYou don't deposit any amount \n";
        }
        else{
            bal = bal+Amt_deposit;
        }
        
    }

    void withdraw(){
        cout<<"\nEnter the value you want to withdraw\n";
        cin>>Amt_withdraw;
       if (bal<Amt_withdraw)
       {
        cout<<"\nMoney can't withdraw\n";
       }
       else{
         bal=bal-Amt_withdraw;
       }
       
    }

    void printDetails()
    {
        cout << "\nThe name of Account holder name is " << name;
        cout << "\nThe Account Number is " << acc_no;
        cout << "\nThe Withdrawing Amount is "<< Amt_withdraw;
        cout << "\nThe deposited amount is " << Amt_deposit;
        cout << "\nYour Account type is  " << Acc_type;
        cout << "\nThe remaining balance is " << bal;
    }   
};
int main(){
    bank b1;
     b1.getdetails();
    b1.deposit();
    b1.withdraw();
    b1.printDetails();
    getch();
    return 0;
}
   