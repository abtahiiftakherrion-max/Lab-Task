//Encapsulation, Setter/Getter, Single Inheritance, Private Data Members,Code Reusability

#include<bits/stdc++.h>
using namespace std;

class Person
{
    private:
    string name;
    int age;
    public:
    void setName(string name)
    {
        this->name=name;
    }
    string getName()
    {
        return this->name;
    }
    void setAge(int age)
    {
        this->age=age;
    }
    int getAge()
    {
        return this->age;
    }
};

class Employee:public Person
{
    private:
    int employeeId;
    int salary;
    public:
    void setID(int employeeId)
    {
        this->employeeId=employeeId;
    }
    int getID()
    {
        return this->employeeId;
    }
    void setSalary(int salary)
    {
        this->salary=salary;
    }
    int getSalary()
    {
        return this->salary;
    }
    void displayEmployee()
    {
        cout<< "ID     : "<<employeeId<<endl;
        cout<< "Salary : "<<salary<<endl;
    }

};

int main()
{
    Employee e;
    e.setName("Rion");
    e.setAge(21);
    e.setID(282);
    e.setSalary(40000);
    cout<< "Name   : "<<e.getName()<<endl;
    cout<< "Age    : "<<e.getAge()<<endl;
    e.displayEmployee();
}