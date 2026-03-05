#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
char getmaxoccchar(string s){
    int arr[26] ={0};
    for(int i = 0; i<s.length();i++){
        char ch = s[i];
        int number = 0;
        number = ch -'a';
        arr[number]++;
    }
    int maximum = -1, ans =0 ;
    for(int i =0; i<26;i++){
        if(maximum <arr[i]){
            ans = i;
            maximum = arr[i];
        }
    }
    char finalAns = 'a'+ans;
    return finalAns;
}
int main(){

string s;
cin>>s;
cout<< getmaxoccchar(s);
    return 0;
}