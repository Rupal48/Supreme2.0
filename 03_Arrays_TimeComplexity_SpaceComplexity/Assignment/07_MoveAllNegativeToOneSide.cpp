#include <iostream>
using namespace std;

// You can also use Dutch National Flag(Two Pointer approach) here too
// The TC and SC will be same

void shiftNegativeOneSide(int arr[],int n) {
    int j=0;
    for (int index=0;index<n;index++) {
        if (arr[index]<0) {
            swap(arr[index],arr[j]);
            j++;
        }
    }
}

int main() {
    cout << endl;
    int arr[]={23,12,-7,10,11,40,60};
    int n=7;

    shiftNegativeOneSide(arr,n);

    cout << "Printing The Array : ";
    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
