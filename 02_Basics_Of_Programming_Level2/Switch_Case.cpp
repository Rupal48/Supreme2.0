#include <iostream>
using namespace std;
int main() {

    float a,b;
    cout << "Enter Two Numbers : " << endl;
    cin >> a >> b; 

    int op;
    cout << "What Operation you want to do ?" << endl;
    cin >> op;
    float ans = 0;
    // op 0 -> add, 1 -> sub, 2 -> mul , 3 -> divide, invalid opration.

    switch(op) {
        case 0:
            cout << "Addition Case" << endl;
            ans =  a + b;
            break;
        case 1:
            cout << "Sub Case" << endl;
            ans = a - b;
            break;
        case 2:
            cout << "Mul Case" << endl;
            ans = a * b;
            break;
        case 3:
            cout << "Div Case" << endl;
            ans = a / b;
            break;
        default:
           cout << "Invalid Operation" << endl;
           return 0;  
    }
    cout << "Your Ans is : " << ans << endl;

    return 0;
}