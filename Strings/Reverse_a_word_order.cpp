#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
       
string reverseWordOrder(string s) {
    // Step 1: Pura string reverse kardo 
    // "my name is reem" -> "meer si eman ym"
    reverse(s.begin(), s.end());

    int n = s.length();
    int start = 0;

    for (int end = 0; end <= n; end++) {
        // Jab space mile ya string khatam ho, tab pichla word reverse karo
        if (s[end] == ' ' || end == n) {
            reverse(s.begin() + start, s.begin() + end);
            start = end + 1;
        }
    }
    return s;
}

int main() {
    string s = "my name is reem";
    cout << "Original: " << s << endl;
    cout << "Reversed Order: " << reverseWordOrder(s) << endl;
    return 0;
}