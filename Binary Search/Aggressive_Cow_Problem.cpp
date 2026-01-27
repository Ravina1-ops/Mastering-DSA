#include <iostream>
using namespace std;

// Function to check if we can place 'k' cows with at least 'mid' distance
bool isPossible(int stalls[], int n, int k, int mid) {
    int cowCount = 1;
    int lastPos = stalls[0]; // Place 1st cow at the first stall
    
    for(int i = 0; i < n; i++) {
        // If the gap between current stall and last cow position is >= mid
        if(stalls[i] - lastPos >= mid) {
            cowCount++;
            if(cowCount == k) {
                return true; // Successfully placed all cows
            }
            lastPos = stalls[i]; // Update the position of the last cow
        }
    }
    return false;
}

// Simple Bubble Sort to sort stalls (Since we are avoiding STL's sort)
void sortStalls(int stalls[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(stalls[j] > stalls[j+1]) {
                // Swap elements
                int temp = stalls[j];
                stalls[j] = stalls[j+1];
                stalls[j+1] = temp;
            }
        }
    }
}

int aggressiveCows(int stalls[], int n , int k){
      int s = 0;
    int maxi = -1;
    for(int i=0; i<n; i++) {
        if(stalls[i] > maxi) maxi = stalls[i];
    }
    int e = maxi; // Maximum possible distance
    
    int ans = -1;
    int mid = s + (e - s) / 2;

    // Step 3: Binary Search on Answer
    while(s <= e) {
        if(isPossible(stalls, n, k, mid)) {
            ans = mid;     // Potential answer found
            s = mid + 1;   // Try to find a larger distance (Go Right)
        } else {
            e = mid - 1;   // Gap is too big, decrease it (Go Left)
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main() {
    int n = 5; // Number of stalls
    int k = 3; // Number of cows
    int stalls[5] = {1, 2, 8, 4, 9}; // Raw array

    // Step 1: Sort the stalls first
    sortStalls(stalls, n);

  

    cout << "The largest minimum distance is: " <<aggressiveCows(stalls,n,k) << endl;

    return 0;
}