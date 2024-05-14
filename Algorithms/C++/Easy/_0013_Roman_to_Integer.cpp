#include <iostream>
#include <string>
using namespace std;

int convert(char ch) {
    switch(ch) {
        case 'I': return 1; break;
        case 'V': return 5; break;
        case 'X': return 10; break;
        case 'L': return 50; break;
        case 'C': return 100; break;
        case 'D': return 500; break;
        case 'M': return 1000; break;
        default: return -1;
    }
}

int romanToInt(string s) {
    int ans = 0;
    for (int i = 0; i < s.length(); i++) {
        int ch = convert(s[i]);
        if (i + 1 < s.length()) {
            int chnext = convert(s[i + 1]);
            if (ch >= chnext) {
                ans = ans + ch;
            }
            else {
                ans = ans + chnext - ch;
                i++;
            }
        }
        else {
            ans = ans + ch;
        }
    }
    return ans;
}

int main(void) {
    string s;
    cin >> s;
    cout << romanToInt(s);
    return 0;
}

// HASH TABLE | MATH | STRING

// Example 1:
// Input: s = "III"
// Output: 3
// Explanation: III = 3.

// Example 2:
// Input: s = "LVIII"
// Output: 58
// Explanation: L = 50, V= 5, III = 3.

// Example 3:
// Input: s = "MCMXCIV"
// Output: 1994
// Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.