#include<iostream>
using namespace std;
int integerpart(int n){
    int s = 0 ;
    int e =  n-1;
    long long int mid = s+(e-s)/2;
   long long int ans  = -1;
    while(s<=e){
        long long int square = mid * mid ;
        if(n == square){
            return mid;
        }
        if(n > square ){
            ans = mid;
            s = mid +1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    
    cout<<"ans: "<<integerpart(37);
}