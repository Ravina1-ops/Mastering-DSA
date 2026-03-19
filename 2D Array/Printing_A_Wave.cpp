#include<iostream>
#include<vector>
using namespace std;
vector<int> waveprint(vector<vector<int>> arr, int rows,int cols){
    vector<int> ans;
    for(int col = 0; col<cols;col++){
        if(col&1){
            // odd Index -> Bottom to top
            for(int r = rows-1;r>=0;r--){
                cout << arr[r][col]<<" ";
                ans.push_back(arr[r][col]);
            }
        }
        else{
            // 0 or even index -> top to bottom
            for(int r = 0; r<rows;r++){
                cout<< arr[r][col]<<" ";
                ans.push_back(arr[r][col]);
                
            }
        }
    }
    return ans;
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
cout<<"Wave Printed Output: "<<endl;
waveprint(arr,row,column);

    return 0;
} 