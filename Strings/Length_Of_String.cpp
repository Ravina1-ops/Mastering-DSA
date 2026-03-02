#include<iostream>
#include<string>
using namespace std;
int getlength(char c[]){
    int count = 0;
    for(int i = 0; c[i]!= '\0'; i++){
        count++ ;
    }
    return count;
}

int main(){
    char names[20];
    cout << "Enter Your Name: "<<endl;
    cin >> names;

    cout<< "Your name is : "<< names<<endl;
    cout<<"Length of your name is: "<< getlength(names);

    return 0;
}