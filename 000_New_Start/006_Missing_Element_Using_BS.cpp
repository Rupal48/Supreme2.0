#include <iostream>
using namespace std;
int findMissingElement(int arr[], int n) {
    int start=0;
    int end=n-1;
    int ans = -1;

    //taki integer overflow na ho do this instead of normal mid
    int mid=start + (end-start)/2;

    while (start <= end) {
        int diff = arr[mid]-mid;
        if (diff==1) {
            //right me jaoo
            start = mid+1;
        }
        else {
            ans = mid;
            //left me jaao
            end = mid-1;
        }
        //mid ko bhi update krna
        mid=start + (end-start)/2;
    }
    if ((ans+1) == 0) {
        return ans;
    }
    return ans+1;
}
int main() {
    int arr[]={1,2,3,4,5,6,7,8};
    int n=8;

    int missingNo = findMissingElement(arr,n);

    cout << "Missing Elemnt = " << missingNo; 
    return 0;
}