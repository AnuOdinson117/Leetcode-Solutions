#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s == t) {
        return true;
    }
    else {
        return false;
    }
}

int main(void) {
    string s, t;
    cin >> s >> t;
    if(isAnagram(s, t)) cout << "true";
    else cout << "false";
    return 0;
}

// HASH TABLE | STRING | SORTING

// Example 1:
// Input: s = "anagram", t = "nagaram"
// Output: true

// Example 2:
// Input: s = "rat", t = "car"
// Output: false