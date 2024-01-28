#include <iostream>
using namespace std;

int convertDigitsToNo(int NumberOfDigits) {

    int num = 0;
    for (int i=0;i<NumberOfDigits;i++) {
        cout << "Enter digit : ";
        int digit;
        cin >> digit;
        num = num*10 + digit;
        cout << "Number Created so far : " << num << endl;
    }
    return num;

}

int main() {

    int NumberOfDigits;
    cin >> NumberOfDigits;
    int num = convertDigitsToNo(NumberOfDigits);
    cout << "Number created by digits : " << num << endl;

    return 0;
} 