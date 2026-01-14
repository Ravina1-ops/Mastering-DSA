#include<iostream>
using namespace std;
int main(){
//   int arr[5]={1,2,3,4,5};
//   int n = 5;
//   int s = 5;
//    int arr[5]={-2,-3,3,-3,2};
//   int s = 0;
int arr[5] = { 2,2,2,2,3};
int s =4;
 int n = 5;
  int f = 0;
  int l = n-1;
  while(l>f){
if(arr[f] + arr[l] == s){
    cout<<arr[f]<<" "<<arr[l]<<endl;
    f++,l--;
}
else {
    if(arr[f] + arr[l]< s ){
        f++;
    }
    else{
        l--;
    }   
} 
}
}