// Hybrid Inheritance, Multiple Inheritance, Hierarchical Inheritance

#include<bits/stdc++.h>
using namespace std;

class Vehicle
{
    public:
    void vehicleInfo()
    {
        cout<< "This is a vehicle."<<endl;
    }
};

class Fair
{
    public:
    void fareInfo()
    {
        cout<< "Transportation fare :500."<<endl;
    }
};

class Car: public Vehicle
{
    public:
    void carInfo()
    {
        cout<< "This is a Honda car."<<endl;
    }
};

class Bus:public Vehicle,public Fair
{
    public:
    void busInfo()
    {
        cout<< "Bus capacity is : 50."<<endl;
    }
};

int main()
{
    Car c;
    c.vehicleInfo();
    c.carInfo();
    Bus b;
    b.vehicleInfo();
    b.busInfo();
    b.fareInfo();
}