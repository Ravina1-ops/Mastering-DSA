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
    int row, column;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of cols: ";
    cin >> column;
    vector<vector<int>> arr(row, vector<int>(column));
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "\nMatrix:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl<<endl;
    }

    rotate90(arr);

    // Print rotated matrix
    for(auto row : arr) {
        for(auto val : row) cout << val << " ";
        cout << endl;
    }
    return 0;
}

