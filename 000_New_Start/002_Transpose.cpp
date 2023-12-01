#include <iostream>
#include <limits.h>
using namespace std;
int main() {
    int arr[3][3] = {{1,2,3},{1,4,5},{3,5,7}};
    int row=3,col=3;
    for (int i=0;i<row;i++) {
        for (int j=i;j<col;j++) {
            swap(arr[i][j],arr[j][i]);
        }
    }
    for (int i=0;i<row;i++) {
        for (int j=0;j<col;j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}