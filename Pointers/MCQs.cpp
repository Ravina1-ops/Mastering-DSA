#include<iostream>
using namespace std;
int main(){
    /* 1. 
int first= 8;
int second = 18;
int *ptr = &second;
*ptr = 9;
cout << first <<" "<<second <<endl;

output = 8 9 
*/

/* 2.

int first = 6;
int *p = &first;
int *q = p;
(*q)++;

cout<<first <<endl;

output = 7
*/

/*3.
int first = 8;
int *p = &first;
cout<< (*p)++ <<" ";
cout<< first << endl;

output = 8 9 because of post increment
*/

/*4.
int *p = 0;
int first = 110;
*p = first ;
cout<< *p <<endl;

output = segmentation fault as p = &first is written for output */


return 0;
}