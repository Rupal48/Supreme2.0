#include <iostream>
#include <vector>
using namespace std;

void printAllPath(int maze[][4], int row, int col, int srcx, int srcy, string &output) {

    //base case
    //Destination coordinates are [row-1],[col-1]
    if (srcx == row-1 && srcy == col--1) {
        //reached destination
        cout << output << endl;
        return;
    }
    
    // 1 case solve krna h baaki recursion smbhal lega

    //Up

}

//A function that will handle all the below mentioned possibilities:
//possibility hai
    //-> path closed
    //

int main() {
    int maze[4][4] = {
        {1,0,0,0},
        {1,1,0,0},
        {1,1,1,0},
        {1,1,1,1}
    };
    int row = 4;
    int col = 4;

    int srcx = 0;
    int srcy = 0;
    string output = "";

    //Create visited 2D array
    vector<vector <bool>> visited(row,vector<bool>(col,false));

    if (maze[0][0] == 0) {
        
    }

    printAllPath(maze, row, col, srcx, srcy, output);

    return 0;
}