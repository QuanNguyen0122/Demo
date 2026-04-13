#include <iostream>
using namespace std;

class Car{
public:
    string Brand;
    int VIN;
    int temp;

    Car(int s){
        VIN = s;
    }

    void printInfo(){
        cout << "Vehicle's brand: " << Brand << "." << endl;
    }

    void printVIN(){
        cout << "Vehicle's VIN: " << VIN << "." << endl;
    }
};

int main()
{
    Car car1(100);

    car1.Brand = "Mercedes";
    car1.VIN   = 12314;

    car1.printInfo();
    car1.printVIN();

    return 0;
}


// This is my comments
