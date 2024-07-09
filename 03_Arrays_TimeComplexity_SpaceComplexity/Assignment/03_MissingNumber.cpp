// Leetcode 268

#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        // Sorting Approach
        // SOrt and then check what element is missing


        // // XOR approach
        // // If we do XOR of all the no.s from 0 to n
        // // plus we also do the xor of all the elments in the array
        // // The elements which exist in the array will cancel themselves
        // // Since A^A = 0 and at last only the missing element will be left
        // int n = nums.size();
        // int ans = 0;
        // for (int i=0;i<=n;i++) ans ^= i;
        // for (auto x : nums) ans^= x;
        // return ans;
        // // TC -> O(2*n) , SC -> O(1)


        // Mathematical Approach
        int sum=0;
        int n = nums.size();
        for (int index=0;index<n;index++) {
            sum+=nums[index];
        }

        int totalSum=(n*(n+1))/2;
        int ans = totalSum-sum;
        return ans;
        // TC -> O(n) , SC -> O(1)
    }
};