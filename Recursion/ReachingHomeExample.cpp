// source to reaching home destination using recursion example 
#include<iostream>
using namespace std;

void reachHome(int source, int desti){
    // print what happens at every step 
    cout<<"Source is "<< source << " at destination "<< desti <<endl; 
    // base case
    if(source == desti){
        cout<<"Reached home successfully. "<<endl;
        return;
    }
    // processing - ak step age badh jao
    source++;
    // recursive call
    reachHome( source,  desti);
}

int main(){
    int source = 0;
    int destination = 10;

    reachHome(source,destination);
    return 0;
}