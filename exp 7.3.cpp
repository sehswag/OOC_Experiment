#include<iostream>
using namespace std;

class Vehicle {
    public :
        Vehicle() {cout<<"This is Vehicle \n";}
};

class Fare {
    public :
        Fare() {cout<<"Fare of Vehicle\n";}
};

class Car : public Vehicle {
    public :
        Car() {cout<<"This vehicle is Car\n";}
};

class Bus : public Vehicle , public Fare {
    public: 
        Bus() {cout<<"This vehicle is a Bus with Fare\n";}
};

int main()
{
    cout<<"Name : Sujal Kambale"<<endl;
    cout<<"Roll no. : 105"<<endl;
    
    Bus obj2;
    return 0;
}

