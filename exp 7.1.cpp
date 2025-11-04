#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "\nThis is a Vehicle\n";
    }
};


class FourWheeler {
public:
    FourWheeler() {
        cout << "This is a Four Wheeler\n";
    }
};


class Car : public Vehicle, public FourWheeler {
public:
    Car() {
        cout << "This Four Wheeler Vehicle is a Car\n";
    }
};

int main() {
	
    cout << "Name: Shubhada Tarlekar\n";
    cout << "Div: B\n";
    cout << "Roll no.: 95\n";
    Car obj;   
    return 0;
}
