#include<iostream>
#include<algorithm>
using namespace std;
void recursive(string& s , int i , int j){
    // base condition 
    if(i > j){
        return ;
    }
    swap(s[i], s[j]);
    i++,j--;
    recursive(s,i,j);
}
int main(){

    string s = {"abcde"};
  recursive(s,0,4);
  cout<< s <<endl;
}