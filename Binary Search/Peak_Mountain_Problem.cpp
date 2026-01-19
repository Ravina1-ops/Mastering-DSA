// we have a given array in which we have find its peak (highest element)
#include<iostream>
using namespace std;
int peakelement(int arr[], int size){
    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s = mid+ 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
int main(){
    int arr[3] = {0,1,0};
    int E = peakelement(arr,3);
    cout<<"Peak Element index: "<<E<<endl;
    cout<<"Peak Element value: "<<arr[E]<<endl;
    int arr2[6] = {0,1,2,8,1,0};
    int E1 = peakelement(arr2,6);
    cout<<"Peak Element index: "<<E1<<endl;
    cout<<"Peak Element value : "<<arr2[E1]<<endl;
    int arr3[10] = {0,1,2,3,4,5,4,3,2,0};
    int E2 = peakelement(arr3,10);
    cout<<"Peak Element index: "<<E2<<endl;
    cout<<"Peak Element value : "<<arr3[E2]<<endl;
}