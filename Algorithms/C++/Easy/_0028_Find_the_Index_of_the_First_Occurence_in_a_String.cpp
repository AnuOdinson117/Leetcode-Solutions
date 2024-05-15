#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {
    int m = haystack.length();
    int n = needle.length();
    for(int i = 0; i < m - n + 1; i++) {
        if(haystack.substr(i, n) == needle) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    string haystack, needle;
    getline(cin, haystack);
    getline(cin, needle);
    cout << strStr(haystack, needle);
    return 0;
}

// TWO POINTERS | STRING | STRING MATCHING

// Example 1:
// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.

// Example 2:
// Input: haystack = "leetcode", needle = "leeto"
// Output: -1
// Explanation: "leeto" did not occur in "leetcode", so we return -1.