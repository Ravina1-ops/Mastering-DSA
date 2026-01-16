#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {5, 6, 7, 8, 9};
    int n = 5;
    int tar = 19;

    sort(arr, arr + n);   // required

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == tar) {
                cout << arr[i] << " " << arr[left] << " " << arr[right] << endl;
                return 0;
            } 
            else if (sum < tar) {
                left++;
            } 
            else {
                right--;
            }
        }
    }

    cout << "No triplet found" << endl;
}
