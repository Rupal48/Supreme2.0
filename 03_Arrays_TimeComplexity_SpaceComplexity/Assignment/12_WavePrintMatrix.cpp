#include <iostream>
#include <vector>
using namespace std;

void wavePrint(vector<vector<int>> mat) {

    int ROW = mat.size() , COL = mat[0].size();

    // // Changing Directions Approach
    // int dir = 0; // dir = 0 means downwards and dir = 1 means upwards
    // while (col < COL) {

    //     cout << mat[row][col] << " ";

    //     if (dir == 0) {
    //         if (row == ROW-1) {
    //             dir = 1;
    //             col++;
    //         }
    //         else row++;
    //     }

    //     else if (dir == 1) {
    //         if (row == 0) {
    //             dir = 0;
    //             col++;
    //         }
    //         else row--;
    //     }

    // }



    // Odd even col approach
    // In even col we go top to down and opposite in odd col
    for (int col = 0;col < COL;col++) {
        if (col%2 == 0) for (int row=0;row<ROW;row++) cout << mat[row][col] << " ";
        else for (int row=ROW-1;row>=0;row--) cout << mat[row][col] << " ";
    }

}

int main() {

    cout << endl;
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    wavePrint(mat);

    return 0;
}