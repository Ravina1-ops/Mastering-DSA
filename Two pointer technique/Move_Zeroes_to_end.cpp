// shift all zeros to the end in output and the 
// element are printing in thir given order without sorting

#include <iostream>
#include <vector>
using namespace std;

void movezero(vector<int> &nums)
{
    int i = 0;
    for (int k = 0; k < nums.size(); k++)
    {
        if (nums[k] != 0)
        {
            swap(nums[k], nums[i]);
            i++;
        }
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
    vector<int> v = {0, 1, 0, 3, 12, 0, 3, 0, 5, 0, 4};
    movezero(v);
    print(v);

    return 0;
}