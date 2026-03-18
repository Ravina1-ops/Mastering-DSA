#include<iostream>
#include<vector>
using namespace std;
vector<int> waveprint(vector<vector<int>> arr, int rows,int cols){
    for(int col = 0; col<cols;col++){
        if(col&1){
            // odd Index -> Bottom to top
            for(int r = rows-1;r>=0;r++){
                cout << arr[r][col]<<" ";
            }
        }
        else{
            // 0 or even index -> top to bottom
            for(int r = 0; r<rows;r++){
                
            }
        }
    }
}
int main(){


    return 0;
} 