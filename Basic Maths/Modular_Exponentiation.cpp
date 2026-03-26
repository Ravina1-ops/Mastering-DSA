#include<iostream>
using namespace std;
int modularExponentiation(int x,int n, int m){
    int res = 1;
    while(n>0){
        if(n&1){
            // odd hai 
            res = ((res)%m * (x)%m)%m;
        }
        x = ((x)%m * (x)%m)%m;
        n = n>>1;
    }
    return res;
}

int main(){

}