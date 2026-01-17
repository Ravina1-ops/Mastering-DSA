#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size -1;
    int mid = start + (end - start)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
      
    }
    return -1; 
}
int main(){
    int evenarr[6] = {2,5,7,8,9,12};
    int oddarr[5] = {5,6,10,15,22};
     
    int index = binarySearch(evenarr, 6 , 9);

    cout<< "Index  is "<<index;
}