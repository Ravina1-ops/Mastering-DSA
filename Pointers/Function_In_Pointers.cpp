#include<iostream>
using namespace std;

void print(int *p){
    cout<< *p << endl; // print value
    cout<< p <<endl; // print address
}

int main(){
    int val = 89;
    int *ptr = &val;

    print(ptr);
    
    return 0;
}