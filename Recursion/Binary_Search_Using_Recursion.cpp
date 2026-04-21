#include<iostream>
using namespace std;

/*void print(int arr[],int s , int e){
    for(int i = 0; i<=e;i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}*/

bool search(int arr[], int s,int e, int tar){
     
    // print(arr,s,e);
    // base case for not found
    if(s>e){
    return false;
}
int mid = s+(e-s)/2;
    //base case for element found
    if(arr[mid] == tar){
        return true;
    }

    if(arr[mid] <tar){
        return search(arr,mid+1,e,tar);
    }
    else{
        return search(arr, s ,mid-1, tar);
    }

}

int main(){
     int arr[6] ={2,4,6,10,14,18};
    int size = 6;
    int k = 6;
   cout<< "present or not: "<< search(arr,0,5,k)<<endl;
    return 0;
}