#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> arr, int n) {
    int start = 0;
    int end = n-1;
    int pivotIndex = -1;
    while (start <= end) {
        int mid = start + (end-start)/2;
        if (arr[mid] < arr[n-1]) end = mid-1;
        else {
            pivotIndex = start;
            start = mid+1;
        }
    }
    return pivotIndex;
}

int main() {
    // For this input it gives -1 since it is not rotated at all
    vector<int> nums = {2,4,6,8,10};
    int n = nums.size();
    
    int pivot = findPivot(nums,n);

    cout << "Pivot Index : " << pivot;

    return 0;
}