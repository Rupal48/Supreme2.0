#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

class Solution {
public:

    // Top=down approach
    int solveWithMemo(vector<int>& coins, vector<int>& dp, int amount) {
        // Base Case
        if (amount < 0) return INT_MAX;
        if (amount == 0) return 0;

        // Checking if the ans already exists in the dp array or not
        if (dp[amount] != -1) return dp[amount];

        int mini = INT_MAX;
        for (auto& coin : coins) mini = min(mini,solveWithMemo(coins,dp,amount-coin));

        // Making sure no Int Overflow happens
        if (mini != INT_MAX) dp[amount] = mini+1; // Adding 1 here instead of inside the fop loop because of int overflow
        else dp[amount] = INT_MAX;

        return dp[amount];
    }

    // Bottom-Up Tabulation Approach
    int solveWithTab(vector<int>& coins, int amount) {

        vector<int> dp(amount+1,INT_MAX);

        // Base Case
        dp[0] = 0;

        for (int value=1;value<=amount;value++) {
            int mini = INT_MAX;
            for (auto& coin : coins) if (value-coin >= 0) mini = min(mini,dp[value-coin]);

            // Making sure no Int Overflow happens
            if (mini != INT_MAX) dp[value] = mini+1; // Adding 1 here instead of inside the fop loop because of int overflow
            else dp[value] = INT_MAX;
        }

        return dp[amount];
    }

    // In this question soace optimization is not possible because worst case me value
    // hr coin pe depend kregi

    int coinChange(vector<int>& coins, int amount) {
        
        // // Memo code
        // vector<int> dp(amount+1,-1);
        // int ans = solveWithMemo(coins, dp, amount);
        // return ans != INT_MAX ? ans : -1;

        // Tabulation Code
        int ans = solveWithTab(coins,amount);
        return ans != INT_MAX ? ans : -1;

    }

    // TC -> O(amount*n)

};