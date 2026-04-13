#include <iostream>
using namespace std;

//Base class
class Car{
private:
    int VIN;
    string Brand;

public:
    Car(int s){
        VIN = s;
        Brand = "Toyota";
    }

    void printInfo(){
        cout << "Vehicle's brand: " << Brand << "." << endl;
    }

    void printVIN(){
        cout << "Vehicle's VIN: " << VIN << "." << endl;
    }

};

//Derived class
class Type: public Car{
private:
    int Number;
    string type;

public:
    Type(int s) : Car(s){
        Number = s;
        type = "A";
    }

    void printNum(){
        cout << "Vehicle's brand: " << Number << "." << endl;
    }

    void printType(){
        cout << "Vehicle's Type: " << type << "." << endl;
    }

};

int main()
{
    Type car1(100);

    // car1.Brand = "Mercedes";
    // car1.VIN   = 12314;

    car1.printInfo();
    car1.printVIN();
    car1.printNum();
    car1.printType();

    return 0;
}