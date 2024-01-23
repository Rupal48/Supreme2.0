#include <iostream>
using namespace std;

void sumUptoN(int n) {

    // // Bad Practice Since you cn directly use the formula which takes
    // // O(1) time complexity instead of O(n)

    // int sum = 0;
    // for (int i=2;i<=n;i+=2) {
    //     sum += i;
    // }

    // Using AP
    // Formula is
    // if n is even , Sum = (n*(2+n))/4;
    // if n is odd first do n = n - 1; then use formula

    if ((n&1) == 1) n -= 1; // Changing n is n is odd
    int sum = (n*(2+n))/4;

    cout << "Final Sum : " << sum << endl;
}

int main() {

    sumUptoN(2);

    return 0;
}