#include<iostream>
using namespace std;
int main(){
int num = 9;
int *ptr = &num;

cout <<"Value of num is : "<<num<<endl;
// num bos ke ander ki value dega
cout <<"Address of num is: "<<&num<<endl;
// num wale box ka address dega
cout<<"Value of ptr is: "<<*ptr<<endl;
// ptr box me rakhe address pe jo value hai vo dega
cout<<"Address of ptr is: "<<ptr<<endl;
// ptr box ka address dega

double d= 9.7;
double *ptr2 = &d;

cout<<"Address is:"<<ptr2<<endl;
cout<<"Value is: "<<*ptr2<<endl;
cout<< "Size of integer is: "<<sizeof(num)<<endl;
cout<< "Size of int pointer is: "<<sizeof(ptr)<<endl;
cout<< "Size of double is: "<<sizeof(d)<<endl;
cout<< "Size of double pointer is: "<<sizeof(ptr2)<<endl;
// always pointer int ya double se *2 size store karega kyoki vo address store karta hai

}