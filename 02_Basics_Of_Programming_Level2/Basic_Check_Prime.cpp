#include <iostream>
using namespace std;

// return true -> if N is a Prime No.
// return false -> if N is not a Prime No.
bool checkPrime(int n) {

    // We are considering that N is always >= 2

    for (int i=2;i<n;i++) {
        if (n%i == 0) {
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

    bool prime = checkPrime(6);

    if (prime) {
        cout << "It is a prime no." << endl;
    }
    else {
        cout << "It is not a prime no." << endl;
    }

    return 0;
}