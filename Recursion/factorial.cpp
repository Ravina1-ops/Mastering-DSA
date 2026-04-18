/* Recursion me 2 main chize honi hi chaiye hai
1. recurence relation f(n) me 
2. base case condition with return statement kyoki agr return statement nhi ddeg
to segmentation falut agye kyoki stack overflow ho jayega tree negavtive infinity
tak chla jayge fn call karte karte
3. processing part kuch bhi print karan ho beech me ya end me 


fun()                                   fun()
{                           |           {
  base case                 |               base case

  processing                |                recurence relation 

  recurrence relation       |                processing 
}                           |             }

TAIL RECURSION              |              HEAD RECUSRION


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