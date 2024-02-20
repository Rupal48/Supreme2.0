// Only doing the optimal approach Since the first two approaches namely sorting and counting are pretty easy

// 2 pointer Approach (Little bit similar to Dutch National Flag Algo)

#include <iostream>
#include <vector>
using namespace std;

void TwoPointerSort0and1(vector<int>& arr) {
    int left = 0;
    int right = arr.size()-1;
    while(left<right) {
        if (arr[left]==0) left++;
        // Case for arr[left]==1
        else {
            swap(arr[left],arr[right]);
            right--;
        }
    }
}

int main() {

    vector<int> arr = {0,1,1,0,0,0,1,0,1,0,1};

    TwoPointerSort0and1(arr);

    for (int i=0;i<arr.size();i++) cout << arr[i] << " ";

    return 0;
}