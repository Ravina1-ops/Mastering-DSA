#include<iostream>
using namespace std;
bool isprime(int n){
    if(n<=1){
        return false;
    }
    for(int i = 2;i<n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter Number: "<<endl;
     cin>>n;
    if(isprime(n)){
        cout<<"It is a Prime number"<<endl;
    }
    else{
        cout<<"It is not a Prime number"<<endl;
    }
    return 0;
}

