//Encapsulation, Abstraction, Inheritance, Abstract Class, Pure Virtual Func-tion, Setter/Getter, Object Pointer, Runtime Polymorphism, new, delete

#include<bits/stdc++.h>
using namespace std;

class Course
{
    private:
    int courseId;
    string courseName;
    public:
    void setID(int courseId)
    {
        this->courseId=courseId;
    }
    int getID()
    {
        return this->courseId;
    }
    void setName(string courseName)
    {
        this->courseName=courseName;
    }
    string getName()
    {
        return this->courseName;
    }

    virtual void displayCourseType()=0;
};

class TheoryCourse: public Course
{
    public:
    void displayCourseType()
    {
        cout << "This is a Theory Course."<<endl;
    }
};

class LabCourse: public Course
{
    public:
    void displayCourseType()
    {
        cout<< "This is a Lab Course."<<endl;
    }
};

int main()
{
    TheoryCourse *t=new TheoryCourse();
    t->setID(111);
    t->setName("Object Oriented Programming.");
    cout<< "Course id is   : "<<t->getID()<<endl;
    cout<< "Course name is : "<<t->getName()<<endl;
    t->displayCourseType();

    LabCourse *l=new LabCourse();
    l->setID(112);
    l->setName("Object Oriented Programming Lab.");
    cout<< "Course id is   : "<<l->getID()<<endl;
    cout<< "Course name is : "<<l->getName()<<endl;
    l->displayCourseType();

    delete t;
    delete l;
}