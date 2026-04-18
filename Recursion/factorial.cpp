/* Recursion me 2 main chize honi hi chaiye hai
1. recurence relation f(n) me 
2. base case condition with return statement
*/

#include<iostream>
using namespace std;

int factorial(int n){
    // base case
    if(n == 0){
        return 1;
    }
    // int smallproblem = factorial(n-1);
    // int bigproblem = n * smallproblem;
    // return bigproblem;

    return n* factorial(n-1);
}
int main(){

    int n;
    cout<<"Enter number: ";
    cin >> n;

    int ans = factorial(n);
    cout<<"Factorial of "<<n<<" is ";
    cout<< ans << endl;


    return 0;
}