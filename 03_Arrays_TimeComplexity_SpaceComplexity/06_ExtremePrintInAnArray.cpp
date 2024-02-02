#include <iostream>
using namespace std;

void extremePrint(int arr[], int size) {

    int left = 0;
    int right = size - 1;

    while (left <= right) {

        // Using this if statement so that
        // the middle element does not prints twice
        // in case of odd no. of elements
        if (left == right) {
            cout << arr[left] << endl;
            break;
        }

        cout << arr[left] << " " << arr[right] << " ";
        left++;
        right--;
    }

}

int main() {

    int arr[] = {10,20,30,40,50,60,70};
    int size = 7;

    extremePrint(arr,size);

    return 0;
}