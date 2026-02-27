// Reverse given array from a given index not complete array and using vector syntax

#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> arr, int m){
    int s = m+1;
    int e = arr.size()-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    return arr;
}

void print(vector<int> arr){
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr;

    arr.push_back(10);
    arr.push_back(9);
    arr.push_back(8);
    arr.push_back(7);
    arr.push_back(6);
    arr.push_back(5);

    vector<int> ans = reverse(arr,1);
    print(ans);




    return 0;
}