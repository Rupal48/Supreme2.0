// Doing RIGHT SHIFT here
// right ki disha me shift
// Only shifting by 1

#include <iostream>
using namespace std;

void shiftArray(int arr[], int size) {

    // Step 1
    // Creating temp for the lst ellement of the array
    int temp = arr[size-1];

    // Step 2
    // starting from end / i = n-1
    // shift -> arr[i] = arr[i-1]
    for (int i=size-1;i>0;i--) {
        arr[i] = arr[i-1];
    }

    // Step 3
    // Copy temp into 0th index
    arr[0] = temp;

}

int main() {

    int arr[] = {10,20,30,40,50,60};
    int size = 6;

    shiftArray(arr,size);

    // Printing the array
    for (int i=0;i<size;i++) {
        cout << arr[i] << " ";
    }

    return 0;
}