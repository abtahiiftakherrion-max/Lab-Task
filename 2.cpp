//Encapsulation, Data Protection, Setter/Getter, Data Validation

#include<bits/stdc++.h>
using namespace std;

class Bank
{
private:
    int accountNumber;
    string accountHolder;
    double balance;
public:
    void setNumber(int accountNumber)
    {
        this->accountNumber=accountNumber;
    }
    void setName(string accountHolder)
    {
        this->accountHolder=accountHolder;
    }
    void setBalance(double balance)
    {
        this->balance=balance;
    }
    int getNumber()
    {
        return this->accountNumber;
    }
    string getName()
    {
        return this->accountHolder;
    }
    double getBalance()
    {
        if(balance>=0)
            return this->balance;
        else
        {
            cout<< "You enter invalid number"<<endl;
            return 0;
        }
    }
};

int main()
{
    Bank b;
    b.setNumber(135789432);
    b.setName("Rion");
    int a;
    cout<< "Enter your balance"<<endl;
    cin>>a;
    b.setBalance(a);
    cout<<"Account Number: "<<b.getNumber()<<endl;
    cout<<"Account holder name: "<<b.getName()<<endl;
    cout<<"Balance :"<<endl<<b.getBalance()<<endl;

    return 0;
}