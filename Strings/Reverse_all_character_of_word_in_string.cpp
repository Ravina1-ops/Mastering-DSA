#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string reverseEachWord(string s) {
    int n = s.length();
    int start = 0;

    for (int end = 0; end <= n; end++) {
        // Space milte hi sirf us word ko reverse karo
        if (s[end] == ' ' || end == n) {
            int i = start;
            int j = end - 1;
            while (i < j) {
                swap(s[i++], s[j--]);
            }
            start = end + 1;
        }
    }
    return s;
}

int main() {
    string s = "my name is reem";
    cout << "Original: " << s << endl;
    cout << "Individual Reversed: " << reverseEachWord(s) << endl;
    return 0;
}