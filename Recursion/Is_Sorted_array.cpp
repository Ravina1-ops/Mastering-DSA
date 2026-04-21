#include<iostream>
using namespace std;
bool issorted(int arr[], int size){
    // base condition
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool ans = issorted(arr+1, size-1);
    
    return ans;}
}

int main(){
    int arr[5]={2,4,8,9,10};
    int ans = issorted(arr,5);
    // cout<<"Array is Sorted ? "<<ans;
    int arr2[5]={2,4,11,9,10};
    int ans2 = issorted(arr2,5);
    // cout<<endl<<"Array is Sorted ? "<<ans2;
    if(ans2){
        cout<< "Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
    return 0;
}