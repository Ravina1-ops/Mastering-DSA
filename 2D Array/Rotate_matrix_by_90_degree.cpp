// given a matrix and rotate it by 90 degree 
/*
 given matrix = rotated matrix
1 2 3                       7 4 1 
4 5 6    = (by 90 degree)   8 5 2
7 8 9                       9 6 3
 
*/              
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void rotate90(vector<vector<int>>& matrix) {
    int n = matrix.size();

    // Step A: Transpose
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step B: Reverse each row
    for(int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    vector<vector<int>> mat = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    rotate90(mat);

    // Print rotated matrix
    for(auto row : mat) {
        for(auto val : row) cout << val << " ";
        cout << endl;
    }
    return 0;
}

