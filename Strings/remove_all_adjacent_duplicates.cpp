#include <iostream>
#include <string>
#include <stack>
#include<algorithm>
using namespace std;

string removeAdjacentDuplicates(const string& s) {
    stack<char> st;
    for (char c : s) {
        if (!st.empty() && st.top() == c) {
            st.pop();  // remove duplicate
        } else {
            st.push(c);
        }
    }

    // build result from stack
    string result;
    while (!st.empty()) {
        result.push_back(st.top());
        st.pop();
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string input = "abbaacvvhhi";
    cout << "Input: " << input << endl;
    cout << "Output: " << removeAdjacentDuplicates(input) << endl;
    return 0;
}
