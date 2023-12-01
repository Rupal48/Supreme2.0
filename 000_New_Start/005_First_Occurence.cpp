#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int target) {
    int start=0;
    int end=n-1;
    int ans = -1;

    //taki integer overflow na ho do this instead of normal mid
    int mid=start + (end-start)/2;

    while (start <= end) {
        //found
        if (arr[mid] == target) {
            //ans store instead of returning
            ans = mid;
            //left me jaao
            end = mid-1;
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
        mid=start + (end-start)/2;
    }
    return ans;
}
int main() {
    int arr[]={10,20,30,30,30,30,40,50};
    int target=30;
    int n=8;

    int ansIndex = binarySearch(arr,n,target);

    cout << target << " found at " << ansIndex; 
    return 0;
}