// Debug the code. Implement selection sort.
// void selectionSort(int arr[], int size) {
//     for (int i = 1; i < size; i++) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }
// }




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// This is insertion sort not selection sort
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 1; i < size-1; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}