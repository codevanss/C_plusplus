#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class bank{
    private:
     double acc_no;
       int Amt_withdraw;
       int Amt_deposit;
       char Acc_type[10];
       char name[50];
       double bal = 0;

    public:
    bank(){
        acc_no = 0;
        strcpy(name , "");
        strcpy(Acc_type  ,"");
    }  
    bank(int ac , char na1[] , char acctype[]){
        acc_no=ac;
        strcpy(name,na1);
        strcpy(Acc_type , acctype);
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
    bank b2(123 , "Parth", "Savings");
    b2.printDetails();
    b2.deposit();
    b2.printDetails();
    b2.withdraw();
    b2.printDetails();
    getch();
    return 0 ;
}
