#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix){
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();
    int count = 0;
    int total = row*col;

    // index initialisation
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row-1;
    int endingCol = col-1;

    while(count < total){
        // print starting row
        for(int index = startingCol;count < total && index<=endingCol; index++){
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        // print ending column 
        for(int index = startingRow;count < total && index<=endingRow; index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;
        // print ending row 
        for(int index = endingCol;count < total && index>=startingCol;index--){
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;
        // print starting column
        for(int index = endingRow; count < total && index>=startingRow; index--){
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
    
}
int main(){
int row ,column;
cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of cols: ";
    cin >> column;
    vector<vector<int>> arr(row, vector<int>(column));
cout << "Enter matrix elements:\n";
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin >> arr[i][j];
        }
    }
    cout << "\nMatrix:\n";
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    vector<int> result = spiralOrder(arr);
cout << "\nSpiral Order: ";
for(int val : result){
    cout << val << " ";
}
cout << endl;


    return 0;
}