#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int Painters = 1;
    int Boards = 0;
    for(int i = 0; i<n;i++){
        if(Boards + arr[i] <= mid){
          Boards += arr[i];
        }
        else{
            Painters ++;
            if(Painters > m || arr[i] > mid){
            return false;
        }
        Boards= arr[i];
    }
    }
    return true;
}

int partition(int arr[], int n , int m ){
    int s = 0;
    int sum = 0;
    int ans = -1;
    for(int i = 0;i<n;i++){
        sum += arr[i];}

    int e = sum;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans; 
}

int main(){
    int arr[6]={2,1,5,6,2,3};
    int books = partition(arr,6,2);
    cout<<"Mid is: "<<books<<endl;
}