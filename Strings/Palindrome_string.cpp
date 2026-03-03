#include<iostream>
#include<string>
using namespace std;

char lowercase(char c){
    if(c >= 'a' && c<= 'z'){
        return c;
    }
    else{
        char temp = c-'A'+'a';
        return temp;
    }
    
}

bool palindrome(char a[],int n){
    int start = 0;
    int end=n-1;
    while(start<=end){
        if(lowercase(a[start]) == lowercase(a[end])){
            
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
    cout << "Enter Your Word: "<<endl;
    cin >> names;
    int len = getlength(names);

    cout<< "Your Word is : "<< names<<endl;
   cout<<"Palindrome or not: "<<palindrome(names,len);

    return 0;
}