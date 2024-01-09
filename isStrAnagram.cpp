# check given two strings are anagram or not..

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string &s1, string &s2)
{
    int n1 = s1.length();
    int n2 = s2.length();

    // if length of both string is not same, then they
    // cannot be anagram
    if (n1 != n2)
        return false;

    // Sort both the strings
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return (s1 == s2);
}

int main()
{
    string str1;
    cout << "enter string1 to check string is anagram or not: ";
    getline(cin, str1);

    string str2;
    cout << "enter string2 to check string is anagram or not: ";
    getline(cin, str2);

    if (isAnagram(str1, str2))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each other";

    return 0;
}
