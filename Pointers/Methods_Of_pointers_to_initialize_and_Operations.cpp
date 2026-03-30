#include<iostream>
using namespace std;
int main(){
    int num = 9;
    int *p3 = &num;
    // common method to initialize pointers

    int i = 8;
    int *p2 = 0;
    p2 = &i;
    // 2nd method to initialize poiners 

    // int *p1 = 0; segmentation fault because doesnot exist in memory 
    // int *ptr; bad practice garbage value store in it

    int j = 5;
    int a = j;
     cout<<"before a increment value of j is "<<j<<endl;
    a++;
//    values change only in a box not in j
    cout<<" after a increment Value of j is: "<<j<<endl;
    int *p4 = &j;
    cout<<"before pointer increment value of j is "<<j<<endl;
    (*p4)++;
    cout<<"afterpointer increment value of j is "<<j<<endl;

// value changes in j box as well 

// copying pointers 

int *q = p4;
cout<< p4 <<" - "<<q<<endl;
cout<< *p4 <<" - "<<*q <<endl;

// important concept 
int w = 6;
int *t = &w;
cout<<"before: "<<*t<<endl;
*t = *t +1;
cout<<"after: "<< *t<<endl;
cout<<"before t: "<< t<<endl;
t =t +1;
// move to next location like 100 se int me 4 byte move karega so 108 pe hoga 
cout<<"After t: "<<t <<endl;



    return 0;
}