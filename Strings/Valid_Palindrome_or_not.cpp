#include <iostream>
#include <string>
using namespace std;
char lowercase(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
    {
        return c;
    }
    else
    {
        char temp = c - 'A' + 'a';
        return temp;
    }
}
bool valid(char s)
{
    if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z') || (s >= '0' && s <= '9'))
    {
        return 1;
    }
    return 0;
}

bool checkpalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start <= end)
    {
        if ((s[start]) == (s[end]))
        {

            start++, end--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

bool ispalindrome(string a)
{
    // faltu characters hatao
    string temp;
    for (int j = 0; j < a.length(); j++)
    {
        if (valid(a[j]))
        {
            temp.push_back(a[j]);
        }
    }
    // lowercase me lao
    for (int j = 0; j < temp.length(); j++)
    {
        temp[j] = lowercase(temp[j]);
    }
    return checkpalindrome(temp);
}

int main()
{
    string str = {"A man, a plan , a canal: Panama"};
    string srt = {"Race a car"};
    cout<<"Valid Palindrome or not: "<<ispalindrome(srt)<<endl;;
    cout<<"Valid Palindrome or not: "<<ispalindrome(str);
}