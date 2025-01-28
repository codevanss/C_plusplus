#include <iostream>
using namespace std;

class employee
{
public:
    string name;
    int salary;

    employee(string n, int s , int sp)
    {

        this->name = n;
        this->salary = s;
        this->SecretPassword = sp;
    }

    void printDetails()
    {
        cout << "The name of our first employee is " << this->name << " and his salary is " << this->salary << endl;
    }

    void getSecretPassword()
    {
        cout << "The secret password is " << this->SecretPassword;
    }

private:
    int SecretPassword;
};

  class programmar : public employee{
    public:
       int error;
  };

int main(){

    employee van("Parth", 3550, 23345);
    // van.name = "Parth";
    // van.salary = 100;
    van.printDetails();
   van.getSecretPassword();
    //cout<<van.SecretPassword;

    return 0;
}

//                      INHERITANCE AND CONSTRUCTOR ALSO INCLUDE IN THIS