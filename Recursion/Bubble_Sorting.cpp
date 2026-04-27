#include<iostream>
using namespace std;

void bubblesort(int *arr, int n){
    // base case 
    if(n == 0 || n == 1 ){
        return ;
    }
    for(int i = 0 ; i< n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    // recursive call
    bubblesort(arr, n-1);
}


int main(){

     int arr[5] = {5, 3, 2, 1, 4};
    
    bubblesort(arr, 5);

    cout << "Sorted Array: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}



// applying same recursion concept in selection and insertion sort