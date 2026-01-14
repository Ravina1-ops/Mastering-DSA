#include<iostream>
using namespace std;
int main(){
  int arr[] = {3, 2, 1, 4};
int n = 4;
 int   s = 5;

    for(int i = 0; i<n; i++ ){
        for(int j = i+1;j<n;j++){
            if(arr[i] + arr [j] == s){
                cout<<arr[i]<<" "<<arr[j]<<endl; // give output as acc to array input not ascending decending occur 
            }
            
            
        }
    }
}