#include <iostream>
#include <string>
using namespace std;

int scoreOfString(string s) {
    int sum = 0;
    for(int i = 0; i < s.length() - 1; i++) {
        int dif = s[i] - s[i + 1];
        if (dif < 0) {
            dif = dif * -1;
        }
        sum = sum + dif;
    }
    return sum;
}

int main(void) {
    string s;
    cin >> s;
    cout << scoreOfString(s);
    return 0;
}

// STRING

// Example 1:
// Input: s = "hello"
// Output: 13
// Explanation:
// The ASCII values of the characters in s are: 'h' = 104, 'e' = 101, 'l' = 108, 'o' = 111. So, the score of s would be |104 - 101| + |101 - 108| + |108 - 108| + |108 - 111| = 3 + 7 + 0 + 3 = 13.

// Example 2:
// Input: s = "zaz"
// Output: 50
// Explanation:
// The ASCII values of the characters in s are: 'z' = 122, 'a' = 97. So, the score of s would be |122 - 97| + |97 - 122| = 25 + 25 = 50.