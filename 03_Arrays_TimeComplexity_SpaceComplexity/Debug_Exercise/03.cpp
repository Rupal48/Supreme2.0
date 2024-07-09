// Debug the code. Your task is to populate the array using the integer values in the range 1
// to N (both inclusive) in the order - 1,3,5,.......,6,4,2.
// void populate(int arr[],int n){
//     int j=0;
//     for(int i=0; i < n; i = i + 2){
//         arr[n-j] = i+2;
//         arr[j] = i+1;
//         j++;
//     }
// }

#include <iostream>
using namespace std;

// I changed the code quuite a bit so see for yourself

void populate(int arr[],int n){
    int j=1;
    for(int i=0; i < n/2; i = i + 1){
        arr[i] = j;
        j++;
        arr[n-i-1] = j;
        j++;
    }
    if (n%2 == 1) arr[n/2] = j;
}

int main() {
    int n = 13;
    int *arr = new int[n];
    populate(arr,n);
    for (int i=0;i<n;i++) cout << arr[i] << ' ';
}