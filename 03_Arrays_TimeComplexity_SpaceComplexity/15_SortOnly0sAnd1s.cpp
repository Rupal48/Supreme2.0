// Only doing the optimal approach Since the first two approaches namely sorting and counting are pretty easy

// 2 pointer Approach (Little bit similar to Dutch National Flag Algo)

#include <iostream>
#include <vector>
using namespace std;

void TwoPointerSort0and1(vector<int>& arr) {

    int left = 0;
    int right = arr.size()-1;

    while(left<right) {

        // left<right is used in next two while loops to avoid the pointer going out of bounds
        while (arr[left]==0 && left<right) left++;
        while (arr[right]==1 && left<right) right--;

        // Swap when arr[left]==1 and arr[right]==1
        swap(arr[left++],arr[right--]);
    }

}

int main() {

    vector<int> arr = {0,1,1,0,0,0,1,0,1,0,1};

    TwoPointerSort0and1(arr);

    for (int i=0;i<arr.size();i++) cout << arr[i] << " ";

    return 0;
}