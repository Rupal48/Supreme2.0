#include <iostream>
#include <algorithm>
using namespace std;

// Brute Force Approach
// Just Linear Search all the no.s from 1 to n
// TC -> O(n^2)

// Binary Search Approach
// Sort then BS
// TC -> O(nlogn + logn)
// SC -> O(logn) , because off sorting
int findMissingElement(int arr[], int n) {
    sort(arr,arr+n);
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


// Maths approach
// TC -> O(n)
// SC -> o(1)
int findMissingElement2(int arr[], int n) {
    int N = n+1;
    int actualSum = (N*(N+1))/2;
    int sum = 0;
    for (int i=0;i<n;i++) sum += arr[i];
    return actualSum - sum;
}

int main() {
    int arr[]={1,2,3,4,5,7,8,9};
    int n=8;

    int missingNo = findMissingElement(arr,n);
    int missingNo2 = findMissingElement2(arr,n);

    cout << "Missing Element = " << missingNo << endl;
    cout << "Missing Element = " << missingNo2;
    return 0;
}