#include <iostream>
using namespace std;

void merge(int arr[], int s, int e) {

    int mid = s+(e-s)/2;

    int lenLeft = mid - s +1;
    int lenRight = e - mid;

    //create left and right array
    int *left = new int[lenLeft];
    int *right = new int[lenRight];

    //copy values from original array to left array
    int k = s;
    //k to starting index of left array values in original array
    for (int i=0; i<lenLeft; i++) {
        left[i] = arr[k];
        k++;
    }

    //copy values from original array to right array
    k = mid+1;
    for (int i=0; i<lenRight; i++) {
        right[i] = arr[k];
        k++;
    }

    //left array is already sorted
    int leftIndex = 0;
    int rightIndex = 0;

    //yhi par galti krte h log
    int minArrayIndex = s;

    while(leftIndex < lenLeft && rightIndex < lenRight) {

        if (left[leftIndex] < right[rightIndex]) {

        }

    }

}

void mergeSort(int arr[], int s, int e) {

    //Base Case
    if (s >= e) {
        // invalid array
        return;
    }

    //Break the array
    int mid = s+(e-s)/2;
    //s to mid -> left
    //mid+1 to e --> right

    //recursion bhaiya ko bulao and
    //left and right array ko sort krdo
    //recursive call for left array
    mergeSort(arr,s,mid);
    //recursive call for right array
    mergeSort(arr,mid+1,e);
    //merge 2 sorted arrays
    merge(arr,s,e);

}

int main() {

    int arr[] = {2,1,6,9,4,5};
    int size = 6;
    int s = 0;
    int e = size - 1;

    cout << "Before merge sort : " << endl;
    for (int i=0; i<size; i++) {
        cout << arr[i] << " "; 
    }

    mergeSort(arr,s,e);

    cout << "After merge sort : " << endl;
    for (int i=0; i<size; i++) {
        cout << arr[i] << " "; 
    }

    return 0;
}