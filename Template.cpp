#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b){
    return a + b;
}

int main(){
    cout << add<int>(4,5) << endl;
    cout << add<float>(4.56,45.3) << endl;

    return 0;
}