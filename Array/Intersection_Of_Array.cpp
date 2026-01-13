// Solution by brute force with n*m complexity

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int arr2[]={1,2,4};
    int n = 4;
    int m = 3;
    int ans;
    for(int i = 0 ;i<n;i++){
        int element = arr[i];
    
    for(int j = 0; j< m; j++){
        // if(element<arr[j]){
        //     break;
        // }
        if(element == arr2[j]){
            ans = element;
            cout<<ans<<" "<<endl;
           arr2[j] = -1;
            break;
       }
       
    }
    
} 
}