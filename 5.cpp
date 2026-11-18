//Single Inheritance, Base Class, Derived Class, Code Reusability

#include<bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string n,int a)
    {
        name=n;
        age=a;
    }

    void displayPersonInfo()
    {
        cout<< "Name :"<<name<<endl;
        cout<< "Age :"<<age<<endl;
    }

};

class Employee: public Person
{
public:

    int employeeId;
    double salary;
    Employee(string n,int a,int e,double s):Person(n,a)
    {
        employeeId=e;
        salary=s;
    };
    void displayEmployeeInfo()
    {
        cout<< "Employee ID :"<<employeeId<<endl;
        cout<< "Salary :"<<salary<<endl;
    }

};

int main()
{
    Employee e1("Rion",21,282,50000);
    e1.displayPersonInfo();
    e1.displayEmployeeInfo();

    return 0;
}