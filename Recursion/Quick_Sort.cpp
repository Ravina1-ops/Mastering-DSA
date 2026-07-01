#include <iostream>
#include <algorithm>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];

    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    // place pivot at right position 
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // left and right wala part solve karte hai left side sabhi chote and right side sabhi bade 
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quicksort(int arr[], int s, int e)
{
    // base condition
    if (s >= e)
    {
        return;
    }
    int p = partition(arr, s, e);

    // left part sort karo
    quicksort(arr, s, p - 1);

    // right part sort karo
    quicksort(arr, p + 1, e);
}

int main()
{
    int arr[8] = {5, 6, 7, 8, 2, 3, 4, 9};
    int n = 8;

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}