//Abstraction, Abstract Class, Pure Virtual Function, Inheritance, Object Pointer, Runtime Polymorphism, new, delete

#include<bits/stdc++.h>
using namespace std;

class Smartphone
{
public:
    virtual void takeSelfie()=0;
    virtual void makeCall()=0;
};

class Android :public Smartphone
{
public:
    void takeSelfie()
    {
        cout << "Take selfie with Android."<<endl;
    }
    void makeCall()
    {
        cout << "Making call using Android."<<endl;
    }
};

class IPhone :public Smartphone
{
public:
    void takeSelfie()
    {
        cout << "Take selfie with IPhone."<<endl;
    }
    void makeCall()
    {
        cout << "Making call using IPhone."<<endl;
    }
};

int main()
{
    Android *a=new Android;
    a->takeSelfie();
    a->makeCall();
    delete a;

    IPhone *i=new IPhone;
    i->takeSelfie();
    i->makeCall();
    delete i;
}