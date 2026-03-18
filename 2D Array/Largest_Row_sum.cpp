// finding largest row sum among all row sums and give its index in output
#include<iostream>
using namespace std;
int largestRowSum(int arr[][3],int n,int m){
int maxi = INT8_MIN;
int rowIndex = -1;
    for(int i = 0; i<3;i++){
        int sum = 0;
        for(int j = 0;j<3;j++){
            sum += arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = i;
        }
    }
    cout<<"The largest sum is : "<<maxi<<endl;
    return rowIndex;
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
int ans = largestRowSum(arr,3,3);
cout<<"Max row is at index: "<<ans<<endl;

    return 0;
}