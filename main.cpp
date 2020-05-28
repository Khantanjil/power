#include <iostream>
using namespace std;

double power(double base, int exponent){
    double result = 1;
    for(int i = 0; i < exponent; i++){
        result = result * base;
    }
    return result;
}
int main(){

    int base;
    int exponent;
    cout << "Type an base number: ";
    cin >> base;
    cout << "Type an exponent number: ";
    cin >> exponent;
    double myPower = power(base, exponent);
    cout << myPower << std::endl;
    return 0;
}
