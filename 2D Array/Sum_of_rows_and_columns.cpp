#include<iostream>
using namespace std;
int sumofrow(int arr[][3],int n,int m){
    cout<<"Sum of rows: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j] ;
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int sumofcol(int arr[][3],int n,int m){
    cout<<"Sum of columns: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[j][i] ;
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int main(){
     int arr[3][3] = {{3, 5, 6, }, {5, 7, 9,}, {2, 4, 5,}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
sumofrow(arr,3,3);
sumofcol(arr,3,3);
return 0;
}