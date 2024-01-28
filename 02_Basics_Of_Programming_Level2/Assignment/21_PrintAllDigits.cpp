#include <iostream>
#include <cmath>
using namespace std;

// This Method prints all the digits in reverse order
// Store them in an array to reverse them aand get the correct order
void printAllDigits(int n) {

    while(n) {
        int onesPlaceDigit = n%10;
        cout << "Digit : " << onesPlaceDigit << endl;
        n /= 10;
    }

}

int main() {

    int n;
    cin >> n;
    printAllDigits(n);

    return 0;
}