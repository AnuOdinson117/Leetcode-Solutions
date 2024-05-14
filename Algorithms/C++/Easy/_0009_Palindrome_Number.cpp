#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if(x < 0) {
        return false;
    }
    int copy = x;
    long rev;
    while(x != 0) {
        rev = rev * 10 + (x % 10);
        x = x / 10;
    }
    if(rev == copy) return true;
    else return false;
}

int main(void) {
    int x;
    cin >> x;
    if(isPalindrome(x)) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}

// MATH

// Example 1:
// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.

// Example 2:
// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

// Example 3:
// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.