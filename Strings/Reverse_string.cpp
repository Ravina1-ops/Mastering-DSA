#include<iostream>
#include<string>
using namespace std;
void reversestring(char c[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(c[s],c[e]);
        s++,e--;
    }
}
void print(char c[], int n){
    for(int i = 0; i<n;i++){
        cout<<c[i];
    }
}
int main(){
    char s[50];
     char names[20];
    cout << "Enter Your Name: "<<endl;
    cin >> names;

    cout<< "Your name is : "<< names<<endl;
    reversestring(names,5);
    print(names,5);

    return 0;
}