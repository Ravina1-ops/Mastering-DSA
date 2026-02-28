#include<iostream>
#include<vector>
using namespace std;

void rotateArr(vector<int>& arr, int k){
    int n = arr.size();
    vector<int> temp(n);
    for(int i = 0;i<n;i++){
        temp[(i+k)%n] = arr[i];
    }
arr = temp;
}

void print(vector<int>& ans){
    for(int i = 0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    rotateArr(v,3);
    print(v);
}