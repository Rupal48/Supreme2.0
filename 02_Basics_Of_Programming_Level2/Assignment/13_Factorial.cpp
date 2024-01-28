#include <iostream>
using  namespace std;

// I used recursion
// Caan also be done by using for loop
int findFactorial(int n) {
    if (n==0||n==1) return 1;
    return n*findFactorial(n-1);
}

int main() {

    int n;
    cin >> n;

    cout << "Factorial : " << findFactorial(n) << endl;

    return 0;
}