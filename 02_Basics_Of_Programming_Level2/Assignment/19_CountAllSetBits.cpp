#include <iostream>
using namespace std;

int countSetBits(int n) {

    int count = 0;

    // // 1. Division Method
    // while(n) {                  // same as while(n>0)
    //     if (n%2 == 1) count++;
    //     n /= 2;                 // same as n = n / 2;
    // }
    // return count;

    // 2. Bitwise Method            // Preferable because bitwise operations are faster on a computer
    while (n) {
        if (n&1) count++;           // Same as if (n&1 == 1)
        n >>= 1;                    // Same as n = n >> 1;
    }
    return count;

}

int main() {

    int n;
    cin >> n;

    int setBitCount = countSetBits(n);
    cout << setBitCount << endl;

    return 0;
}