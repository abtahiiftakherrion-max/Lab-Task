//Hierarchical Inheritance, Base Class, Multiple Derived Classes

#include<bits/stdc++.h>
using namespace std;

class Vehicle
{
    public:
    void displayVehicleInfo()
    {
        cout<< "This is a Vehicle."<<endl;
    }
};

class Car:public Vehicle
{
    public:
    void carInfo()
    {
        cout<< "This is a car."<<endl<< "Car Brand Toyota."<<endl<< "Number of Doors 4"<<endl;
    }
};

class Bus:public Vehicle
{
    public:
    void busInfo()
    {
        cout<< "This is a bus."<<endl<< "Bus Router 1 and Capacity 50."<<endl;
    }
};

int main()
{
    Car c;
    c.displayVehicleInfo();
    c.carInfo();
    Bus b;
    b.displayVehicleInfo();
    b.busInfo();
}