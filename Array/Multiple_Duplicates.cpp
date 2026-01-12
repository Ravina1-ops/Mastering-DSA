#include<iostream>
#include<cmath>
using namespace std;
int main(){
int arr[5]={1,3,3,1,2};
int n=5;
cout<<"Duplicates: "<<endl;
for(int i = 0; i<n;i++){
    int index = abs(arr[i]);// find absolute value |-5|=5
    if(arr[index]<0){
        cout<<index<<" ";
    }
    else{
        arr[index] = -arr[index];
    }
}
    return 0;
}


