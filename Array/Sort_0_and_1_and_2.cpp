#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void sort(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (low < high && mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++, mid++;
        }
        else
        {
            if (arr[mid] == 1)
            {

                mid++;
            }
            else
            {
                if (arr[mid] == 2)
                {
                    swap(arr[mid], arr[high]);
                    high--;
                }
            }
        }
    }
}
int main()
{
    int arr[] = {2, 0, 0, 1, 2};
    int arr2[] = {0, 1, 2, 0, 0, 1};
    int arr3[] = {0, 2, 1, 0, 2, 1, 0, 1, 2};
    sort(arr, 5);
    print(arr, 5);
    cout << endl;
    sort(arr2, 6);
    print(arr2, 6);
    cout << endl;
    sort(arr3, 9);
    print(arr3, 9);
    cout << endl;
}