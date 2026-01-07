#include <iostream>
using namespace std;
void printarray(int arr[], int n){
     cout << "Swaped array: " << endl;
    for (int i = 0; i <n; i++)
    {
        cout << arr[i]<<" ";
        
    }
}

void SwapAlternate(int arr[], int size){
    for (int i = 0; i < size - 1;   i = i + 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
         
        }
    }
}
int main()
{
    int even[6] = {2, 5, 8, 4, 6, 9};
    int odd[7] = {3,6,8,4,7,9,1};
   SwapAlternate(even, 6);
    SwapAlternate(odd, 7);
   printarray(even, 6);
   cout<<endl;
   printarray(odd, 7);
}