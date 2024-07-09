// Debug the code. Linear Search.
// void linearSearch(int arr[], int n ,int val){
//     for(int i=0;i<n;i++){
//         if(arr[i]==val){
//             return;
//         }
//     }
//     return;
// }

int linearSearch(int arr[], int n ,int val) { // Made return type from void to int 
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return i; // Did return i instead of just return
        }
    }
    return -1; // Did return -1 instead of return 
}