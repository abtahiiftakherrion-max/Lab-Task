//Abstraction, Abstract Class, Pure Virtual Function, Inheritance, RuntimePolymorphism, Object Pointer, new, delete

#include<bits/stdc++.h>
using namespace std;

class Payment
{
    protected:
    virtual void processPayment()=0;
};

class CreditCardPayment: public Payment
{
    public:
    void processPayment()
    {
        cout<< "Payment by Credit Card."<<endl;
    }

};

class MobileBankingPayment: public Payment
{
    public:
    void processPayment()
    {
        cout<< "Payment by Mobile Banking."<<endl;
    }

};

int main()
{
    CreditCardPayment *c=new CreditCardPayment();
    c->processPayment();
    delete c;

    MobileBankingPayment *m=new MobileBankingPayment();
    m->processPayment();
    delete m;
}