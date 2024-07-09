// Key Pair on gfg
// Two sum on leetcode

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    
	    // Brute Force Approach
	    // Just use 2 for loops
	    // TC -> O(n^2) , SC -> O(1)
	    
	    // Map Approach
	    // TC -> O(n*logn) , n for traversal and then logn for find func in map
	    
	    // Two pointer Approach
	    // First sort then proceed using left and right pointers as shown below
	    
	    sort(arr,arr+n);
	    int left = 0 , right = n-1;
	    while (left < right) {
	        if (arr[left]+arr[right] == x) return true;
	        if (arr[left]+arr[right] < x) left++;
	        else right--;
	    }
	    return false;
	    
	    // TC -> O(nlogn + n)
	    // SC -> O(logn)
	    
	    // But we cannot use this approach if the question demands us to return the indexes
	    // Then we will have to use the map approach
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}

// } Driver Code Ends