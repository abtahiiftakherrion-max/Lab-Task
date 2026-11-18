//Multilevel Inheritance, Base Class, Derived Class, Code Reusability

#include<bits/stdc++.h>
using namespace std;

class University
{
    public:
    void universityInfo()
    {
        cout<< "Bangladesh University of Business and Technology."<<endl;
    }
};

class Department: public University
{
    public:
    void departmentInfo()
    {
        cout<< "Computer Science and Engineering."<<endl;
    }
};

class Student: public Department
{
    public:
    void studentInfo()
    {
        cout<< "Student Name: Abtahi Iftakher Rion"<<endl;
        cout<< "Student ID  : 282"<<endl;
    }
};

int main()
{
    Student s;
    s.universityInfo();
    s.departmentInfo();
    s.studentInfo();
}