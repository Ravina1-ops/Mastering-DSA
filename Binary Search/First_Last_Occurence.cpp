#include<iostream>
using namespace std;
int firstoccurence(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            end = mid -1;
        }
        if(arr[mid]>key){
            end = mid -1;
        }
        if(arr[mid]<key){
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int lastoccurence(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        if(arr[mid]>key){
            end = mid -1;
        }
        if(arr[mid]<key){
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main(){
    int arr[5]={1,2,2,3,5};
    cout<<"first occurence is: "<<firstoccurence(arr,5,2)<<endl;
    cout<<"last occurence is: "<<lastoccurence(arr,5,2)<<endl;
    int arr2[15]={1,2,2,3,5,10,10,10,15,15,18,18,18,18,18};
    cout<<"first occurence is: "<<firstoccurence(arr2,15,18)<<endl;
    cout<<"last occurence is: "<<lastoccurence(arr2,15,18)<<endl;
    int arr3[10]={1,2,2,3,5,7,8,9,10,12};
    cout<<"first occurence is: "<<firstoccurence(arr3,10,7)<<endl;
    cout<<"last occurence is: "<<lastoccurence(arr3,10,7)<<endl;
    int arr4[9]={1,2,3,5,7,8,9,10,12};
    cout<<"first occurence is: "<<firstoccurence(arr4,9,4)<<endl;
    cout<<"last occurence is: "<<lastoccurence(arr4,9,4)<<endl;
}