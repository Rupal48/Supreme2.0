// This code doesn't worf on vs for some reason works fine on online compilers

#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinaryDivMethod(int n) {
    // Division Method
    int binaryNo = 0;
    int i = 0;
    while (n>0)
    {
        int bit = n%2;
        // cout << bit << endl;
        binaryNo += bit*pow(10,i++);
        n = n/2;
    }
    return binaryNo;
}

int decimalToBinaryBitwiseMethod(int n) {
    // Bitwise Method
    int binaryNo = 0;
    int i = 0;
    while (n>0)
    {
        int bit = n & 1;
        // cout << bit << endl;
        binaryNo += bit*pow(10,i++);
        n = n >> 1;
    }
    return binaryNo;
}

int main() {

    // int n;
    // cin >> n;
    // int binary = decimalToBinaryDivMethod(6);

    // 6 ke liye ans glt aara aur mmaybe allso for some more inputs
    // Just a vs thing no need to worry

    int binary = decimalToBinaryBitwiseMethod(6);
    cout << binary << endl;

    return 0;
}