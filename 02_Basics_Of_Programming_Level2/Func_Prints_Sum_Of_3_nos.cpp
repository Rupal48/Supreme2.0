#include <iostream>
using namespace std;

// // Directly Printing without returning
// void printSum(int a, int b, int c) {

//     int answer = a + b + c;
//     cout << "Sum is : " << answer << endl;

// }

// Returning The Value of Sum
int printSum(int a, int b, int c) {

    int answer = a + b + c;
    return answer;

}

int main() {
    
    // printSum(3,6,4);

    int sum = printSum(4,2,5);
    cout << "Sum is : " << sum << endl;

    return 0;
}