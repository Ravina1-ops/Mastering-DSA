/* you have been given a no of stairs initially you are at the 0th stair,
and you need to reach nth stair each time you can either climb one steo or two steps
you are suppossed to return the no of distinct ways in which you can climb 
from the 0th step to nth step
*/

#include<iostream>
using namespace std;
int countway(int n){
    if(n < 0 ){
        return 0;
    }
    if(n == 0){
        return 1;
    }
  int ans =  countway(n-1)+countway(n-2);
  return ans;
}

int main(){
    int n;
    cout<<"Enter stair number you want to climb: ";
    cin>>n;
    cout<<"Possible ways to climb "<<n<<"th stair are: ";
    int ans = countway(n);
    cout<< ans << endl;
    return 0;
}