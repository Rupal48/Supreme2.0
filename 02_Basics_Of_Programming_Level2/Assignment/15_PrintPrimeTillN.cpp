#include <iostream>
#include <cmath>
using namespace std;

// return true -> if N is a Prime No.
// return false -> if N is not a Prime No.
bool checkPrime(int n) {

    for (int i=2;i<=sqrt(n);i++) {                       // I used the optimized version here taking the loop only till
        if (n%i == 0) {                                 // <= sqrt(n)
            // remainder = 0 -> perfectly divisible
            // not a prime no.
            return false;
        }
    }

    // Yaha paar main keh skta hu ki
    // [2,3,4,......,n-1] koi bhi n ko perfectly divide nhi kr paya hoga

    // it means that N is a prime no.
    return true;

}

int main() {

    int n;
    cin >> n;

    for (int i=2;i<n;i++) {
        bool isPrime = checkPrime(i);
        if (isPrime) {
            cout << i << endl;
        }
    }
    
    return 0;
}