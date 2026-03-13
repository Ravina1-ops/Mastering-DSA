#include<iostream>
#include<string>
#include<vector>
using namespace std;
int compress(vector<char>& chars){
    int i = 0;
    int ansindex = 0;
    int n = chars.size();
    while(i<n){
        int j = i+1;
        while(j<n && chars[i] == chars[j]){
            j++;
        }
        chars[ansindex++] = chars[i];
        int count = j-i;
        if (count>1){
            string cnt = to_string(count);
            for(char ch: cnt){
                chars[ansindex++] = ch;
            }
        }
        i=j;
    }
    return ansindex;
}


    int main() {
    string input;
    cout << "Enter the string to compress: ";
    cin >> input;

    // 1. Initialize the vector with the characters from the string
    vector<char> chars(input.begin(), input.end());

    // 2. Call your compress function
    int newLength = compress(chars);

    // 3. Print the result up to the new length
    cout << "Compressed characters: ";
    for (int i = 0; i < newLength; i++) {
        cout << chars[i];
    }
    cout << "\nNew length: " << newLength << endl;

    return 0;
}
