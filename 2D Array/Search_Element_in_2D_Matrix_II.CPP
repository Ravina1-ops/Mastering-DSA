// ROW wise sorted and column wise sorted
/* 1     4   7   11  15
   2     5   8   12  19
   3     6   9   16  22
   10    13  14  17  24*/
   
#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target){
    int row = matrix.size();
    int col = matrix[0].size();

    int rowIndex = 0;
    int colIndex = col -1;

    while(rowIndex < row && colIndex >=0){
        int element = matrix[rowIndex][colIndex];

        if(element == target){
            return 1;
        }
        if(element <target){
            rowIndex++;
        }
        else{
            colIndex--;
        }
    }
    return 0;
}
int main(){
int row ,column;
cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of cols: ";
    cin >> column;
// vector<vector<int>> arr = {{2,3,4},{5,6,7},{4,7,9}};
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
int target = 10;
if(searchMatrix(arr,target)){
    cout << "Element Found "<< endl;
}
else{
    cout<< "Element Not Found "<< endl;
}

    return 0;
} 