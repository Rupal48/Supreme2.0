#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int target) {
    int start=0;
    int end=n-1;

    //There is some flaw in calc of mid
    //As it can cause integer overflow
    // int mid=(start+end)/2;
    //Hence dont do this instead do this
    int mid = start + (end-start)/2;

    while (start <= end) {
        //found
        if (arr[mid] == target) {
            //return index of the found element
            return mid;
        }
        else if (target > arr[mid]) {
            //right me jaao
            start = mid+1;
        }
        else {
            //left ne jaao
            end = mid-1;
        }
        //mid ko bhi update krna
        mid = start + (end - start)/2;
    }
    //agr yha tk pohoche
    //iska mtlb element nhi mila
    return -1;
}
int main() {
    int arr[]={10,20,30,40,50,60,70,80,90};
    int target=90;
    int n=9;

    int ansIndex = binarySearch(arr,n,target);

    cout << target << " found at " << ansIndex; 
    return 0;
}