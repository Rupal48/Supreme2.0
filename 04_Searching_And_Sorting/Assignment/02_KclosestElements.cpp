// Leetcode 658

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        // // 2-pointer approach
        // int left = 0, right = arr.size()-1;
        // while (right-left+1 > k) {
        //     if (abs(arr[left]-x) > abs(arr[right]-x)) left++;
        //     else right--;
        // }
        // return vector<int> (arr.begin()+left,arr.begin()+right+1);
        // // TC -> O(n) , SC -> O(1)


        // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
        // Very Good Approach
        // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
        // binary search approach
        int n = arr.size();
        int left = 0, right = n-k;
        while (left < right) {
            int mid = left + (right - left) / 2;
            // think a lot abt these conditions
            // like why without abs
            // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
            if (x-arr[mid] <= arr[mid+k]-x) right = mid;
            else left = mid+1;
            // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
        }
        return vector<int> (arr.begin()+left,arr.begin()+left+k);
        // TC -> O(logn) , SC -> O(1)


    }
};