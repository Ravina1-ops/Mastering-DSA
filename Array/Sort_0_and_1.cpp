#include <iostream>
using namespace std;
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void sortarray(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }
        while (arr[right] == 1 && left < right)
        {
            right--;
        }

        swap(arr[left], arr[right]);
        {
            left++;
            right--;
        }
    }
}
int main()
{
    int arr[5] = {0, 1, 1, 0, 0};
    int arr2[10] = {0, 1, 0, 1, 0, 1, 0, 1, 1, 0};
    int n = 5;
    sortarray(arr, 5);
    printarray(arr, 5);
    cout << endl;
    sortarray(arr2, 10);
    printarray(arr2, 10);
}
