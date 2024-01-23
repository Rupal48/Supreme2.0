#include <iostream>
using namespace std;

// // 1. BASIC METHOD
// void checkEvenOdd(int n) {
//     if (n%2 == 0) {
//         cout << "Even Number" << endl;
//     }
//     else {
//         cout << "Odd Number" << endl;
//     }
// }

// 2. Using Bitwise Opertor
void checkEvenOdd(int n) {
    if ((n&1) == 0) {
        cout << "Even Number" << endl;
    }
    else {
        cout << "Odd Number" << endl;
    }
}

int main() {

    checkEvenOdd(37);

    return 0;
}