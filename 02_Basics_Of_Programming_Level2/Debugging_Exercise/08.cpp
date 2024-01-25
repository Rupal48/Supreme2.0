// Debug the code. Find the second largest in the code.
// #include<iostream>
// using namespace std;
// #include <climits>

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max = INT_MIN;
//     for(int i=0;i<n;i++){
// 	    if(max<arr[i]){
// 	      max=arr[i];
//       }
//      }
//      int second = INT_MIN;
//      for(int i=0;i<n;i++){
// 	     if(max>arr[i] && arr[i]>second){
// 	       second = arr[i];
//        }
//      }
//      cout<<second;
// 		 return 0;
// }

#include <iostream>
using namespace std;
#include <climits>

int main()
{
    int n;
    cin >> n;

    // Just added a condition for 0 or 1 elements in the array
    // Instead of doing all the calculations and then giving INT_MIN as output
    // I just gaaave it directly
    if (n == 0 || n == 1) { 
        cout << INT_MIN;
    }

    else
    {
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int max = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (max < arr[i]) {
                max = arr[i];
            }
        }
        int second = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (max > arr[i] && arr[i] > second) {
                second = arr[i];
            }
        }
        cout << second;
    }
    return 0;
}