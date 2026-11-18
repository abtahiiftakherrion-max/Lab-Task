//Multiple Inheritance, Base Classes, Derived Class, Code Reusability

#include<bits/stdc++.h>
using namespace std;

class LandVehicle
{
    public:
    void landInfo()
    {
        cout<< "This vehicle can travel on land."<<endl;
    }
};

class WaterVehicle
{
    public:
    void waterInfo()
    {
        cout<< "This vehicle can travel on water."<<endl;
    }
};

class AmphibiousVehicle: public LandVehicle, public WaterVehicle
{
    public:
    void displayVehicleType()
    {
        cout<< "This is a Amphibious."<<endl;
    }

};

int main()
{
    AmphibiousVehicle av;
    av.displayVehicleType();
    av.landInfo();
    av.waterInfo();
}