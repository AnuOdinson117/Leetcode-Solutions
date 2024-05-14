#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    int n = strs.size();
    if(n == 1) {
        return strs[0];
    }
    sort(strs.begin(), strs.end());
    string first = strs[0];
    string last = strs[n - 1];
    string longest = "";
    for(int i = 0; i < (min(first.size(), last.size())); i++) {
        if(first[i] == last[i]) {
            longest = longest + first[i];
        }
        else {
            return longest;
        }
    }
    return longest;
}

int main(void) {
    int n;
    cin >> n;
    vector<string> strs(n);
    for(int i = 0; i < n; i++) {
        cin >> strs[i];
    }
    cout << longestCommonPrefix(strs);
    return 0;
}

// STRING | TRIE

// Example 1:
// Input: strs = ["flower","flow","flight"]
// Output: "fl"

// Example 2:
// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.