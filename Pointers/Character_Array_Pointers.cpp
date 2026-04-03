// character array
#include<iostream>
using namespace std;
int main(){
    int arr[6]= {1,2,3,4,5,6};
    char ch[5]={"abcd"};

    cout<< arr <<endl; // print the address of 1st index
    cout << ch << endl; // print the values ch store abccd

    char *c = &ch[0];
    cout<<c<<endl; // print value of ch

    cout<<*c<<endl; // print a only 
    cout<<&c<<endl; // print the address .

    char temp ='z';
    char *u =&temp;
    cout<<u<<endl; // isme null value store nhi hai to ye jab tak print 
    // hota rahega jab tak null value na mil jaye char array me 

/* char ch[6] = {'adcfg} //good 
char *c = "abcgdh" // bad practice dont use this anytime 
*/

    return 0;
}