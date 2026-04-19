/* print 412 umerical into string like four one two
*/
#include<iostream>
using namespace std;
void saydigits(int n, string arr[]){
    // base case
    if(n == 0){
        return ;
    }
    int digit = n % 10;
    n = n/10;
    // recursive call 
    saydigits(n,arr);
    cout<< arr[digit]<<" ";
}

int main(){
    int n;
    cout<<"Enter numeric value: "<<endl;
    cin>>n;
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<" Value in Words: "<<endl;
    saydigits(n,arr);
    return 0;
}
