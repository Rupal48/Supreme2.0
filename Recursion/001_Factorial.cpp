#include <iostream>
using namespace std;

int factorial(int n) {
    //base case
    if (n==0 || n==1) {
        return 1;
    }

    int recursion = factorial(n-1);

    int finalAns = n*recursion;

    return finalAns;
}

int main() {
    int n = 5;
    cout << "Factorial of " << n << " : " << factorial(n) << endl;
    return 0;
}