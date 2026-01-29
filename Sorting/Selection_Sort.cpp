#include<iostream>
using namespace std;
void selectionsort(int arr[], int n){
    int minIndex = 0;
    for(int i = 0;i<n-1; i++){
        minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
           
        }
         swap(arr[minIndex],arr[i]);
    }
}

 void print(int arr[], int n){
    cout<<endl;
    cout<<"Sorted Array: ";
    for(int i = 0;i<n; i++){
        cout<<arr[i]<<" ";
    }
 }
int main(){
    int arr[5] = {6,2,8,4,10};
   
     selectionsort(arr,5);
     print(arr,5);

}