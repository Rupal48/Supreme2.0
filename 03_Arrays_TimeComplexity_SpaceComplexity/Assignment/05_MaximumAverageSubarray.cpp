// Leetcode 643

#include <vector>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        for (int i=0;i<k;i++) sum += nums[i];
        int maxSum = sum;
        for (int i=k;i<n;i++) {
            sum += nums[i] - nums[i-k];
            maxSum = max(maxSum,sum);
        }
        return (double)maxSum/k;
        // TC -> O(n) , SC -> O(1)
    }
};