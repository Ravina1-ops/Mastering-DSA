#include<iostream>
using namespace std;
int modularExponentiation(int x,int n, int m){
    int res = 1;
    while(n>0){
        if(n&1){
            // odd hai 
            res = ( 1LL * (res)* (x)%m)%m;
        }
        x = ( 1LL * (x)%m * (x)%m)%m;
        n = n>>1;
    }
    return res;
}

int main(){
 int x,n,m;
 cout<<"Enter base value: ";
 cin>>x;
 cout<<"Enter Power value: ";
 cin>>n;
 cout<<"Enter modular value: ";
 cin>>m;

 cout<<"Modular Exponentiation : "<<modularExponentiation(x,n,m);
}