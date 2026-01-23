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
double moreprecision(int n, int precision, int intSol ){
    double factor = 1;
    double ans = intSol;
    for(int i = 0; i<precision;i++){
        factor = factor/10;
        for(double j = ans; j*j<n;j = j+factor){
            ans = j;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>> n;
    int intSol = integerpart(n);

    cout<<"Square Root of "<<n<<" is : "<<moreprecision(n,3,intSol);
    return 0;
}