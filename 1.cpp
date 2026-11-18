//Encapsulation, Private Data Members, Setter/Getter, this Keyword

#include<bits/stdc++.h>
using namespace std;

class Student
{
private:
    int studentId;
    string studentName;
    double cgpa;
public:
    void setID(int studentId)
    {
        this->studentId=studentId;
    }
    void setName(string studentName)
    {
        this->studentName=studentName;
    }
    void setCgpa(double cgpa)
    {
        this->cgpa=cgpa;
    }
    int getID()
    {
        return this->studentId;
    }
    string getName()
    {
        return this->studentName;
    }
    double getCgpa()
    {
        return this->cgpa;
    }
};

int main()
{
    Student s;
    s.setID(2103282);
    s.setName("Rion");
    s.setCgpa(3.72);
    cout<<s.getID()<<endl;
    cout<<s.getName()<<endl;
    cout<<s.getCgpa()<<endl;

    return 0;
}