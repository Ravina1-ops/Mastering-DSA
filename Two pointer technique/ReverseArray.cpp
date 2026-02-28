#include<iostream>
using namespace std;
void Reverse(int arr[] , int size){
int start = 0; 
int end = size-1;
while(start<=end){
    swap(arr[start],arr[end]);
    start++,end--;
}
}
 void print(int arr[], int n){
    cout<<endl;
    cout<<"Reverse Array: ";
    for(int i = 0;i<n; i++){
        cout<<arr[i]<<" ";
    }
 }
int main(){
    int arr[5] = {2,5,6,3,4};
    int n=5;
    cout<<"Given Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
     Reverse(arr,5);
      print(arr, 5);
}