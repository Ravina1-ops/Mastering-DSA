#include <iostream>
using namespace std;

void update(int **p){
    // p = p+1;
// no change as it come thorugh pass by value

    // *p = *p+1;
// ptr2 ke box me jo value hai matalb p ka aaddress usko increment kar do matlab 4 bit increase hogi

    **p = **p+1;
    //  i wale value ko increase karegi

}
int main()
{
    int i = 57;
    int *ptr = &i;
    int **ptr2 = &ptr;
    
    cout <<" before "<< i << endl;
    cout <<" before "<< ptr << endl;
    cout <<" before "<< ptr2 <<endl;

    update(ptr2);
    cout<<" after: "<< i <<endl;
    cout<<" after: "<< ptr <<endl;
    cout<<" after: "<< ptr2<<endl; 
    return 0;
}