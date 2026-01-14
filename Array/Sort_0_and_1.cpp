#include<iostream>
using namespace std;
int main(){
    int arr[5] = {0,1,1,0,0};
// int s =4;
 int n = 5;
  int f = 0;
  int l = n-1;
  while(l>=f){
if(arr[f] == 0 && arr[l] == 1){
    cout<<arr[f]<<" "<<arr[l]<<endl;
    f++,l--;
}
else {
    if(arr[f] ==1 && arr[l]== 0 && l>f ){
        swap(arr[f],arr[l]);
        f++;
    }
    else{
        l--;
    }   
} 
}
}
