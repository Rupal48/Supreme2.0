#include <iostream>
using namespace std;

void sumUptoN(int n) {

    // // Bad Practice Since you cn directly use the formula which takes
    // // O(1) time complexity instead of O(n)

    // int sum = 0;
    // for (int i=1;i<=n;i++) {
    //     sum += i;
    // }

    int sum = (n*(n+1))/2;

    cout << "Final Sum : " << sum << endl;
}

int main() {

    sumUptoN(10);

    return 0;
}