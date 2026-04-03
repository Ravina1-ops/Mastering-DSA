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

int getsum(int *arr, int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];

    }
    return sum;
}
int main(){
    int val = 89;
    int *ptr = &val;
    cout<<"before: "<<*ptr<<endl;
    print(ptr);
    update(ptr);
    cout<<"After: "<<*ptr<<endl;


    int arr[6] = {1,2,3,4,5,8};

    cout<<"sum is :"<< getsum(arr+3,3);
    // through using pointer in function and array we find any operation on a 
    // specific psrt of array like above we find sum of only last 3 elements
    return 0;
}