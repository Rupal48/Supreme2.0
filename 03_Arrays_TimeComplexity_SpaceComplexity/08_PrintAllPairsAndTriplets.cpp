// Solutions may not be optimal -------(MAYBE)--------

#include <iostream>
using namespace std;

void printPairs(int arr[], int size) {

    for (int i=0;i<size;i++) {
        for (int j=0;j<size;j++) {
            cout << arr[i] << " " << arr[j] << endl;
        }
    }

}

void printTriplets(int arr[], int size) {

    for (int i=0;i<size;i++) {
        for (int j=0;j<size;j++) {
            for (int k=0;k<size;k++) {
                cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
            }
        }
    }

}

int main() {

    int arr[] = {10,20,30,40};
    int size = 4;

    printPairs(arr,size);

    printTriplets(arr,size);

    return 0;
}