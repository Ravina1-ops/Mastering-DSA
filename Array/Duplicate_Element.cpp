#include<iostream>
#include<vector>
using namespace std;

/*int  findduplicate(vector<int> &arr)
{   int ans = 0 ;
    for(int i = 0 ; i < arr.size();i++){
        ans = ans ^ arr[i];  
    }
    for(int i = 1; i < arr.size(); i++){
        ans = ans^i;
    }
    return ans;
}
int main(){
 vector<int> arr={2,3,1,3};
int duplicate= findduplicate(arr);
cout<<"Duplicate: "<< duplicate ;
return 0;
}*/

int  findduplicate(int arr[], int size)
{   int ans = 0 ;
    for(int i = 0 ; i < size;i++){
        ans = ans ^ arr[i]; /* XOR of all elements */
    }
    for(int i = 1; i < size; i++){
        ans = ans^i; 
        // XOR all ans with less than size like size is 5 so xor with 1 2 3 4 with ans
    }
    return ans;
}
int main(){
 int arr[15]={2,13,14,13,1,8,5,3,4,6,9,10,11,12,7}; /*Always rembember that write only those numbers whose are in range
 of size like if size is 5 the elemenst range is 1 to 4 not 5 is included.*/
int duplicate = findduplicate(arr,15);
cout<<"Duplicate: "<< duplicate ;
return 0;
}