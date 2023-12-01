//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

#define M 1000000007

    vector<bool> Sieve(int n) {
        vector<bool> sieve(n+1,true);
        sieve[0] = sieve[1] = false;
        
        for (int i = 0; i*i <= n ; i++) {
            if(sieve[i] == true) {
                long long int j = i*i;
                while(j<=n) {
                    sieve[j] = false;
                    j += i;
                }
            }
        }
        
        return sieve;
    }

    vector<bool> segmentedSieve(long long L, long long R) {
        
        vector<bool> sieve = Sieve(sqrt(R));
        vector<long long int> basePrimes;
        for (long long int i = 0; i<sieve.size(); i++) {
            if(sieve[i]) {
                basePrimes.push_back(i);
            }
        } 
        
        vector<bool> segSieve(R-L+1,true);
        if (L==1) {
            segSieve[0] = false;
        }
        
        for (auto prime : basePrimes) {
            long long int first_mul = (L/prime)*prime;
            if (first_mul < L) {
                first_mul += prime;
            }
            long long int j = max(first_mul,prime*prime);
            while (j <= R) {
                segSieve[j-L] = false;
                j += prime;
            }
        }
        
        return segSieve;
    }

    long long primeProduct(long long L, long long R){
        // code here
        vector<bool> primeSieve = segmentedSieve(L,R);
        long long int ans = 1;
        for (long long int i = 0; i < primeSieve.size() ; i++) {
            if (primeSieve[i]) {
                ans = (ans*(L+i))%M;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}
// } Driver Code Ends