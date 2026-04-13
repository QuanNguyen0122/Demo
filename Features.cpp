#include <iostream>
using namespace std;

template <class X> 
void swap(X a, X b, X &c)
{

    c = a + b;
}

class Car{
private:
    int VIN = 3;

public:
    friend void sum(Car car1, int i);
};

void sum(Car car1, int i)
{
    int temp = car1.VIN + i;

    cout << temp << endl;
}

int main()
{
    // int a = 12;
    // int b = 10;
    // int c = 0;

    // swap(a,b,c);

    // cout << c << endl;

    Car car1;

    sum(car1, 45);

    return 0;
}


// This is new to me
