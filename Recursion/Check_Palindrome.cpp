#include<iostream>
using namespace std;

bool palindrome(string s, int i, int j){
    // base conndition
    if(i>j ){
        return true;
    }
    if(s[i] != s[j]){
        return false;}
    else{
      //recursive call 
      return palindrome(s,i+1,j-1);
    }
}

int main(){
   string name = "abcddcba";
   cout<<endl;
   bool isPalindrome = palindrome(name,0,name.length()-1);
   if(isPalindrome){
    cout << "Its a Palindrome "<< endl;
   }
   else{
    cout<< "Its not a Palindrome "<< endl;
   }
}