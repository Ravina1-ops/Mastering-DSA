#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {5, 24, 8,64};
    cout << "address of 1st memory block is " << arr << endl;     // give loc of 1st block (address)
    cout << arr[0] << endl;                                       // give value of 1st index
    cout << "address of 1st memory block is " << &arr[0] << endl; // give loc of 1st block (address)

    cout << " value " << *arr << endl;       // dereference the value from this
    cout << " value " << *arr + 1 << endl;   // add 1 in that value
    cout << " value " << *(arr + 1) << endl; // increse the index and dereference the value

// arr[i] = * (i+arr) or i[arr] = *(i+arr) both same
int i =3;
cout<< i[arr] <<endl;

int temp[10] = {1,2};
cout<< sizeof(temp)<<endl;
cout<< sizeof(*temp)<<endl;
cout<< sizeof(&temp)<<endl;

int *ptr = &temp[0];
cout<< sizeof(ptr) <<endl;
cout<< sizeof(*ptr) <<endl;
cout<< sizeof(&ptr) <<endl;

int h[10] = {3,5,6};
cout<<" adress of 1st: "<< &h[0] <<endl;
cout<<"adress: "<< &h <<endl;
cout<<"adress: "<< h <<endl;

int *u = &h[0];
cout<<" Adress of h: "<< u <<endl;
cout<<" value stor at adress of h: "<< *u <<endl;
cout<<" Adress of pointer u box: "<< &u <<endl;


    return 0;
}