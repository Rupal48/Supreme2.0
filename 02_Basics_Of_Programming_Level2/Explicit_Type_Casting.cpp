#include <iostream>
using namespace std;
int main() {

    // // Explicit Type Casting
    // // 1. double to int
    // double pi = 3.14159265;
    // int intPi = (int)pi; // Explicit Conversion from double to int
    // cout << intPi << endl;

    // // 2. flot to char
    // float floatingNumber = 65.35;
    // char charValue = (char)floatingNumber; // Explicit Conversion from float to char
    // cout << charValue << endl;

    // 3. int to float
    int a = 10;
    int b = 3.0;
    float c = a/((float)b); // Explicit Conversion from int to float
    cout << c << endl;

    return 0;
}