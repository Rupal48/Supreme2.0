// Leetcode 54

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int n = matrix.size() , m = matrix[0].size();
        int horStart = 0 , horEnd = m-1 , verStart = 0 , verEnd = n-1;
        int totalElements = n*m;
        int count = 0;
        vector<int> ans;

        while (count < totalElements) {

            // Printing the row above
            for (int i=horStart;i <= horEnd && count < totalElements;i++) {
                ans.push_back(matrix[verStart][i]);
                count++;
            }
            verStart++;

            // Printing the col on the right
            for (int i=verStart;i <= verEnd && count < totalElements;i++) {
                ans.push_back(matrix[i][horEnd]);
                count++;
            }
            horEnd--;

            // Printing the row below
            for (int i=horEnd;i >= horStart && count < totalElements;i--) {
                ans.push_back(matrix[verEnd][i]);
                count++;
            }
            verEnd--;

            // Printing the col on the left
            for (int i=verEnd;i >= verStart && count < totalElements;i--) {
                ans.push_back(matrix[i][horStart]);
                count++;
            }
            horStart++;

        }

        return ans;
        // TC -> O(n*m)
        // SC -> O(1)

    }
};