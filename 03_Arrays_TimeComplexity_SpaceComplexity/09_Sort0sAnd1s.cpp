// This soln is not optimal
// Optimal is done further ahead in 14 and 15

#include <iostream>
using namespace std;

void sortZeroOne(int arr[], int size) {

    int zeroCount = 0;
    int oneCount = 0;

    // Step 1 : Count 0s and 1s
    for (int i=0;i<size;i++) {
        if (arr[i]==0) zeroCount++;
        else oneCount++;            // Considering the array is made up of only 0s and 1s
    }

    // // Place all 0s first
    // int i;
    // for (i=0;i<zeroCount;i++) {
    //     arr[i] = 0;
    // }

    // // Placing all the 1s
    // for(int j=i;j<size;j++) {
    //     arr[j] = 1;
    // }

    // EASY WAY
    // in terms of understanding
    int index = 0;

    while(zeroCount--) {
        arr[index++] = 0;
    }

    while(oneCount--) {
        arr[index++] = 1;
    }

}

int main() {

    int arr[] = {0,1,0,1,1,0,1,1,1,0,0,1};
    int size = 12;

    sortZeroOne(arr,size);

    // Printing the array
    for (int i=0;i<size;i++) {
        cout << arr[i] << " ";
    }

    return 0;
}