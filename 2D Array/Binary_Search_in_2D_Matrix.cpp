#include <iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix,int target)
{
    int row = matrix.size();
    int column = matrix[0].size();
    int start = 0;
    int end = row*column - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int element = matrix[mid/column][mid%column];
        if (element == target)
        {
            return 1;
        }
        if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return 0;
}
int main()
{
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
        cout << endl;
    }
   int target = 6;
   bool found = searchMatrix(arr,target);
   cout<<"\nSearching for "<<target <<": ";
   if(found){
    cout<< " \nElement Found!"<< endl;
   }
   else{
    cout<< "Not found! "<< endl;
   }

return 0;
}