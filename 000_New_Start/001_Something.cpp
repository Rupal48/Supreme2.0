#include <iostream>
#include <limits.h>
using namespace std;
int main() {
    int arr[3][4] = {{1,2,3,4},{1,4,5,6},{3,5,7,8}};
    int row=3,col=4;
    int max=INT_MIN;
    for (int i=0;i<col;i++) {
        int col_sum=0;
        for (int j=0;j<row;j++) {
            col_sum+=arr[j][i];
        }
        cout << col_sum << endl;
    }
    return 0;
}