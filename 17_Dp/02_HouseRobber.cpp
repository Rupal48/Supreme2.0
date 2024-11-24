// Leetcode 198 House Robber

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    // Top-down dp approach
    int solve(vector<int>& nums, vector<int>& dp, int idx) {
        // Base case
        if (idx < 0) return 0;
        if (dp[idx] != -1) return dp[idx];
        // Choosing the curr house
        int opt1 = nums[idx]+solve(nums,dp,idx-2); // Doing idx-2 because we cannot choose adjacent house
        // Not choosing the curr house
        int opt2 = solve(nums,dp,idx-1);

        dp[idx] = max(opt1,opt2);
        return dp[idx];
    }

    // Bottom Up Approach
    int solveBottomUp(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        if (n == 1) return nums[0];
        // base case
        dp[0] = nums[0]; // If you choose idx 1
        dp[1] = max(nums[0],nums[1]); // If you dont choose idx2 hence choosing idx 2
        for (int i=2;i<n;i++) dp[i] = max(dp[i-1],nums[i]+dp[i-2]);
        return dp[n-1];
    }

    // Bottom-Up + Optimization
    int solveBottomUpMemoryOptimization(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        if (n == 1) return nums[0];
        // base case
        int prev = nums[0]; // If you choose idx 1
        int curr = max(nums[0],nums[1]); // If you dont choose idx2 hence choosing idx 2
        for (int i=2;i<n;i++) {
            int currCopy = curr;
            curr = max(curr,nums[i]+prev);
            prev = currCopy;
        }
        return curr;
    }

    int rob(vector<int>& nums) {
        // // For top-down approach
        // int n = nums.size();
        // vector<int> dp(n,-1);
        // int ans = solve(nums,dp,n-1);
        // return ans;

        // // For bottom-up approach
        // int ans = solveBottomUp(nums);
        // return ans;

        // Bottom-Up + Memory Optimization
        int ans = solveBottomUpMemoryOptimization(nums);
        return ans;
    }
};