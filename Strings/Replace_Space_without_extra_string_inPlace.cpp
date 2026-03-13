#include<iostream>
#include<string>
using namespace std;
string replacespace(string s){
   int spacecount = 0;
   for(char c:s){
    if(c == ' '){
        spacecount++;
    }
   }
   int oldlen = s.length();
   s.resize(oldlen + spacecount*2);
   int i = oldlen-1;
   int j = s.length()-1;
   while(i>=0){
    if(s[i]==' '){
        s[j--]='0';
        s[j--]='4';
        s[j--]='@';
    }
    else{
        s[j--]=s[i];
    }
    i--;
   }
   return s;
}

int main(){
    string s = {"My name is Ravina"};
    cout<<replacespace(s);
    return 0;
}