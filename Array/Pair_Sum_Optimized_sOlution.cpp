#include<iostream>
#include<algorithm>
using namespace std;
int main(){
//     int arr[] = {3, 2, 1, 4};
// int n = 4;
//  int   s = 5; 
//     int ans,ans2;
//     for(int i = 0; i<n; i++ ){
//         for(int j = i+1;j<n;j++){
//             if(arr[i] + arr [j] == s){
//                 int temp,temp2;
//                 temp = min(arr[i],arr[j]); // give output in increasing order whether the array is sorted or nnot
//                 temp2 = max(arr[i],arr[j]);
//                ans = temp; ans2 = temp2;
//                  cout<<ans<<" "<<ans2<<endl;
//             }
//         }
//     }

//   int arr[5]={1,2,3,4,5};
//   int n = 5;
//   int s = 5;
//    int arr[5]={-2,-3,3,-3,2};
  int n = 5;
//   int s = 0;
int arr[5] = { 2,2,2,2,3};
int s =4;
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