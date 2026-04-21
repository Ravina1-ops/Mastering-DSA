#include<iostream>
using namespace std;
bool search(int arr[], int size, int k){
    // base case 
    if(size ==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        int remaining = search(arr+1, size-1, k);
        return remaining;
    }
}

int main(){
    int arr[5] ={1,3,5,6,8};
    int size = 5;
    int k = 2;
    int ans = search(arr,size,k);
    if(ans){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    return 0;
}