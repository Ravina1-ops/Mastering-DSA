#include<iostream>
#include<vector>
using namespace std;

bool checkrotatesort(vector<int>& arr){
    int n = arr.size();
    int count = 0;
    for(int i = 1; i<n;i++){
        if(arr[i-1] > arr[i]){
            count += 1;
        }
    }
        if(arr[n-1] > arr[0]){
            count++;
        }
    
    return count<=1;
}

// it return 1 is it is true and 0 if false. 


int main(){

    vector<int> v = {3,4,5,1,2};
    cout<<checkrotatesort(v);

    return 0;
}