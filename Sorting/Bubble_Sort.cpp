#include <iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {   bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(swapped == false){
            //already sorted 
            break;
        }
    }

}

void printsort(int arr[], int n)
{  
    cout << "Sorted Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[5] = {5, 3, 2, 1, 4};
    int a2[6] = {1, 7, 6, 10, 9, 14};
    bubblesort(arr, 5);
    printsort(arr, 5);
    bubblesort(a2, 6);
    printsort(a2, 6);
}