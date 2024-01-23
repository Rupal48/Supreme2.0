// Program to find the maximum of 3 no.s
// Using the inbuilt maxa function

#include <iostream>
using namespace std;

int printMax(int num1, int num2, int num3) {

    // int ans = max(num1,num2);
    // int finalAns = max(ans,num3);

    // int finalAns = max(max(num1,num2),num3);
    // return finalAns;
    
    return max(max(num1,num2),num3);
}

int main() {

    int maximum = printMax(38,23,54);
    cout << "Maximum is : " << maximum << endl;

    return 0;
}