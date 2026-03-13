#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to check if s2 contains a permutation of s1
bool checkInclusion(string s1, string s2) {
    // Frequency arrays for characters (assuming lowercase English letters)
    vector<int> freqS1(26, 0), freqWindow(26, 0);

    // Count frequency of characters in s1
    for (char c : s1) {
        freqS1[c - 'a']++;
    }

    int windowSize = s1.size();
    int n = s2.size();

    // Sliding window over s2
    for (int i = 0; i < n; i++) {
        // Add current character to window frequency
        freqWindow[s2[i] - 'a']++;

        // Remove character that goes out of window (when window size exceeded)
        if (i >= windowSize) {
            freqWindow[s2[i - windowSize] - 'a']--;
        }

        // Compare window frequency with s1 frequency
        if (freqWindow == freqS1) {
            return true; // Found a permutation
        }
    }

    return false; // No permutation found
}

int main() {
    string s1 = "ab";
    string s2 = "eidbaooo";

    // Example: s1 = "ab", s2 = "eidbaooo"
    // "ba" is a permutation of "ab" and exists in s2
    if (checkInclusion(s1, s2)) {
        cout << "Permutation exists in string!" << endl;
    } else {
        cout << "No permutation found." << endl;
    }

    return 0;
}
