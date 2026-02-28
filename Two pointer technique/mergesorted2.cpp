// dont use 3rd array to store sorted array instead of that
// store in 1st array in places of zeros

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int m, vector<int> &arr2, int n)
{
    int i = m - 1, j = n - 1;
    int k = m + n - 1;
    while (i >= 0 && j >= 0)
    {
        if (arr[i] > arr2[j])
        {
            arr[k--] = arr[i--];
        }
        else
        {
            arr[k--] = arr2[j--];
        }
    }

    while (j >= 0)
    {
        arr[k--] = arr2[j--];
    }
}

void print(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v = {1, 3, 5, 0, 0, 0};
    vector<int> v2 = {2, 4, 6};

    merge(v, 3, v2, 3);
    print(v);

    return 0;
}
