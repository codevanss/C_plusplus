#include<iostream>
using namespace std;

class Student
{
    int id;
    string name;
    public:
    Student(int id,string name)
    {
        this->id=id;
        this->name=name;
    }
    void display()
    {
        cout<<"Id :"<<id<<endl;
        cout<<"Name :"<<name;
    }
};
int main()
{
    Student s(100,"Aman");
    s.display();

    return 0;
}