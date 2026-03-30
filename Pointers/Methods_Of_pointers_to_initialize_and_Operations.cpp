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

    


}