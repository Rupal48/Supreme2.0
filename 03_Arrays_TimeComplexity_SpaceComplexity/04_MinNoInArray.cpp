#include <iostream>
#include <limits.h>
using namespace std;

int findMinInArray(int arr[], int size) {
    // store ans in this variable
    int minAns = INT_MAX;

    for (int i=0;i<size;i++) {

        // if (arr[i] < minAns) {
        //     minAns = arr[i];
        // }

        minAns = min(arr[i],minAns);

    }

    return minAns;
}

int main() {

    int arr[] = {4,2,63,1,5,-1,5};
    int size = 7;

    int minimum = findMinInArray(arr,size);
    cout << "Minimum No. is : " << minimum << endl;

    return 0;
}