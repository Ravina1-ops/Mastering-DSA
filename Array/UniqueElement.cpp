#include<iostream>
using namespace std;
void Unique(int *arr, int n){
    int ans=0;
    for(int i =0;i<n;i++){
        ans= ans^arr[i];
    }
    cout<<endl; 
cout<<"Unique Element : "<<ans;
}

  
int main(){
    int arry[5] = {2,5,2,5,6};
    int n1=5;
    cout<<"Given Array: ";
    for(int i = 0; i<n1;i++){
        cout<<arry[i]<<" ";
    }
    Unique(arry,5);
    int arr[15] = {2,5,2,5,6,8,8,7,7,6,3,3,12,12,15};
    int n2=15;
    cout<<endl;
    cout<<"Given Array: ";
    for(int i = 0; i<n2;i++){
        cout<<arr[i]<<" ";
    }
    Unique(arr,15);
    

}