#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 1, 1, 2};
    int n = 5;

    // Step 1: store frequencies using index mapping
    for(int i = 0; i < n; i++) {
        int index = (arr[i] - 1) % n;
        arr[index] += n;
    }

    // Step 2: check if frequencies are unique
    for(int i = 0; i < n; i++) {
        int freq1 = arr[i] / n;

        if(freq1 > 0) {
            for(int j = i + 1; j < n; j++) {
                int freq2 = arr[j] / n;
                if(freq1 == freq2 && freq1 > 0) {
                    cout << "False";
                    return 0;
                }
            }
        }
    }

    cout << "True";
    return 0;
}
