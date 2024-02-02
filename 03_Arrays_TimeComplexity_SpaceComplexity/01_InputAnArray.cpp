#include <iostream>
using namespace std;
int main() {

    int arr[5] = {2,3};         // If hard coded the rest of the array is filled with zeroes

    // If taken as user input
    // The rest of the array still has garbage value
    // for (int i=0;i<2;i++) {
    //     cin >> arr[i];
    // }
    
    for (int i=0;i<5;i++) {
        cout << arr[i] << endl;
    }

    return 0;
}