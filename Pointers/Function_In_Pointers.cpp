#include<iostream>
using namespace std;

void print(int *p){
    cout<< *p << endl; // print value
    cout<< p <<endl; // print address
}

void update(int *p){
    p = p+1;
    cout<<"inside update: "<<p<< endl;
    *p = *p+1;

}
int main(){
    int val = 89;
    int *ptr = &val;
    cout<<"before: "<<*ptr<<endl;
    print(ptr);
    update(ptr);
    cout<<"After: "<<*ptr<<endl;
    return 0;
}