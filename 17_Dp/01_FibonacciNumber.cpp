// Leetcode 509 Fibonacci Number

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    // Plain Recursion
    int solveWithRec(int n) {
        // Base Case
        if (n == 0 || n == 1) return n;

        int ans = solveWithRec(n-1)+solveWithRec(n-2);
        return ans;
    }

    // Top-donw Approach
    // Rec + memoization approach
    int solveUsingMem(int n, vector<int>& dp) {
        // Base Case
        if (n == 0 || n == 1) return n;

        // Step 3 : If ans already exist then return ans
        if (dp[n] != -1) return dp[n];

        // Step 2 : Store and return using dp array
        dp[n] = solveUsingMem(n-1,dp)+solveUsingMem(n-2,dp);
        return dp[n];
    }

    int solveUsingTabulation(int n) {
        // Step 1 : Create dp array
        vector<int> dp(n+1,-1);

        // Analyze the base case and fill the dp array
        dp[0] = 0;
        if (n == 0) return 0; // agr ye case ni dalenge to error aayga in case of n==0 cause dp
                              // array the size hi 1 h
        dp[1] = 1;

        //step 3 : fill thr remaining dp array
        // size = n+1
        // index = 0 => n
        // index fill ho cuka h 0 aur 1 ka
        // bacha konsa index 2 => n
        for (int i=2;i<=n;i++) {
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];
    }

    int solveUsingTabulationSpaceOptimized(int n) {
        // Step 1 : Create dp array
        // vector<int> dp(n+1,-1);

        // Analyze the base case and fill the dp array
        int prev = 0;
        if (n == 0) return 0; // agr ye case ni dalenge to error aayga in case of n==0 cause dp
                              // array the size hi 1 h
        int curr = 1;
        if (n == 1) return 1;

        //step 3 : fill thr remaining dp array
        // size = n+1
        // index = 0 => n
        // index fill ho cuka h 0 aur 1 ka
        // bacha konsa index 2 => n
        int ans;
        for (int i=2;i<=n;i++) {
            ans = curr + prev;
            prev = curr;
            curr = ans;
        }

        return ans;
    }

    int fib(int n) {

        // int ans = solveWithRec(n);
        // return ans;

        // Step 1 : Create dp array
        // vector<int> dp(n+1,-1);
        // int ans = solveUsingMem(n,dp);
        // return ans;

        // int ans = solveUsingTabulation(n);
        // return ans;

        return solveUsingTabulationSpaceOptimized(n);

    }

};