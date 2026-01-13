#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,3,4};
    int n = 5;
    int arr2[]={2,2,3,3};
    int m = 4;
    int i =0, j = 0, ans;
    while(i<n && j<m){
        if(arr[i]<arr2[j]){
            i++;
        }
        if(arr[i]==arr2[j]){
            ans = arr[i];
            cout<<ans<<endl;
            i++,j++;
        }
        if(arr[i]>arr2[j]){
            j++;
        }
    }
}