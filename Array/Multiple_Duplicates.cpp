#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int arr[5]={1,2,3,2,1};
    int n=5;
    cout<<"duplicate : "<<endl;
    for(int i=0;i<n;i++){
    int num = abs(arr[i]);// Step 1: Get the  (Value)
        // We use abs() because the value might have been made negative already!
        if(arr[num]<0){cout<< num <<" "<<endl;
        }
        else{
            arr[num] = -arr[num];
        }
    }
    return 0;
}


