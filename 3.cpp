//Abstraction, Abstract Class, Pure Virtual Function, Inheritance

#include<bits/stdc++.h>
using namespace std;

class Shape
{
protected:
    double dimension;
public:
    void getDimension()
    {
        cin>>dimension;
    }

    virtual double calculateArea()=0;
};

class Square:public Shape
{
public:

    double calculateArea()
    {
        return dimension*dimension;
    }
};

class Circle: public Shape
{
public:

    double calculateArea()
    {
        return 3.1416*dimension*dimension;
    }
};

int main()
{
    Square s;
    Circle c;

    cout<< "Enter the length of square"<<" ";
    s.getDimension();
    cout<< "Enter the radious of circle"<<" ";
    c.getDimension();
    cout<<endl;
    cout<< "The area of the square  :"<<s.calculateArea()<<endl;

    cout<< "The area of the circle  :"<<c.calculateArea()<<endl;

}