#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]>= arr[0]){
            s = mid +1 ;
        }
        else{
            e = mid ;
        }
         mid = s+(e-s)/2;
    }
    return s;
}
int binarySearch(int arr[], int size,int s,int e, int key)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}


int target(int arr[], int n , int key){
    int p = pivot(arr,5);
    if(key>= arr[p] && key<= arr[n-1]){
        return binarySearch(arr,n,p,n-1,key);
    }
    else{
        return binarySearch(arr,n,0,p-1,key);
    }
}

int main(){
    int arr[5] = {7, 9, 1, 2, 3};
   int key = 2;
   cout<<"Target element is at index: "<<target(arr,5,key);
    

}