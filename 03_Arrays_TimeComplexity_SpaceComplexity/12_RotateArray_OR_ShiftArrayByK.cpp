// Rotate Array on Leetcode 189

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        // //----------- BRUTE FORCE APPROACH ------------
        // // USING A TEMP ARRAY JUST LIKE SHIFT BY 1

        // vector<int> temp;
        // int n = nums.size();

        // // Doing k = k%n; Since shifting by n places give the initial array
        // k %= n;

        // // Copying the last k elements into temp array
        // for (int i=n-k;i<n;i++) {
        //     temp.push_back(nums[i]);
        // }
        
        // // Shifting Part
        // for (int i=n-1;i-k>=0;i--) {
        //     nums[i] = nums[i-k];
        // }

        // // Copying array back from the temp array
        // for (int i=0;i<k;i++) {
        //     nums[i] = temp[i];
        // }

        // // TC -> O(k)+O(n-k)+O(k) = O(n+k)
        // // SC -> O(k)


        // //------------ Another Approch aapproch using modulus opertor(%) --------------
        // // This Approach has better time complexity
        // // But worse Space complexity

        // int n = nums.size();
        // vector <int> ans(n);
        // for (int i=0;i<n;i++) {
        //     // Using formula newIndex = (index+k)%n
        //     ans[(i+k)%n] = nums[i];
        // }
        // for (int i=0;i<n;i++) {
        //     nums[i] = ans[i];
        // }

        // // TC -> O(n)+O(n) = 2O(n) = O(n)
        // // SC -> O(n)


        //-------------- OPTIMAL APPROACH ---------------------------
        // Without using any temp array
        // Using inbuilt reverse function of vectors

        int n = nums.size();
        k %= n;
        
        // 1. rev [0,n-k-1]
        reverse(nums.begin(),nums.begin()+(n-k));

        // 2. rev [n-k,n-1]
        reverse(nums.begin()+(n-k),nums.end());

        // 3/ rev [0,n-1]
        reverse(nums.begin(),nums.end());

        // TC -> O(n-k)+O(k)+O(n) = 2O(n) = O(n)
        // SC -> O(1)

    }
};