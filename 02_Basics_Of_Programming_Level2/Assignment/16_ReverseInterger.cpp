// Question 7 on Leetcode

#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans = 0;

        // Checking if the no. is equl to INT_MIN
        // Cause if it is when we change its sign
        // It will go out of the range of int
        // So we just return 0 for it
        // As told in the ques
        if (x == INT_MIN) {
            return 0;
        }

        // Checking and turning -ve integers into +ve ones
        bool isNeg = false;
        if (x < 0) {
            isNeg = true;
            x = -x;
        }

        while(x>0) {

            // Putting the condition so that
            // ans does not go out of range of int
            // We did INT_MAX/10 cause 
            // we need to stop it before it goes out of range
            if (ans > INT_MAX/10) {
                return 0;
            }

            int digit = x%10;
            ans = ans*10 + digit;
            x = x/10;

        }

        // Returning --ve ans if the no.s was -ve in the first place
        return isNeg ? -ans : ans;

    }
};