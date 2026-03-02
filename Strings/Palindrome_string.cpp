#include<iostream>
#include<string>
using namespace std;

bool palindrome(char a[],int n){
    int start = 0;
    int end=n-1;
    while(start<=end){
        if(a[start] == a[end]){
            
            start++,end--;
        }
        else{
            return 0;
        }
    }
    return 1;
}
   
int getlength(char c[]){
    int count = 0;
    for(int i = 0; c[i]!= '\0'; i++){
        count++ ;
    }
    return count;
}

int main(){
    char s[50];
     char names[20];
    cout << "Enter Your Name: "<<endl;
    cin >> names;
    int len = getlength(names);

    cout<< "Your name is : "<< names<<endl;
   cout<<"Palindrome or not: "<<palindrome(names,len);
    return 0;
}