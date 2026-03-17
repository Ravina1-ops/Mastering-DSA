#include <iostream>
using namespace std;
bool ispresent(int arr[][4], int target, int n, int m)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[3][4] = {{3, 5, 6, 8}, {5, 7, 9, 6}, {2, 4, 5, 6}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int target;
    cout << "Enter Target element to search: ";
    cin >> target;
    if (ispresent(arr, target, 3, 4))
    {
        cout << "Element found";
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}