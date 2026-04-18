#include<iostream>
using namespace std;

// tail recursion

void reverseprint(int n){
    // base case
    if(n == 0){
        return;
    }
    // processing
    cout<<n<<endl;

    // recusrion relation
    reverseprint(n-1);
}

// head recursion

void print(int n){
    // base case
    if(n == 0){
        return;
    }
    // recurrence relation
    print(n-1);
    // processing
    cout<<endl<<n<<endl;
}
int main(){
    int  n;
    cout<<"Enter number: ";
    cin>>n;

    reverseprint(n);
    print(n);
    return 0;
}