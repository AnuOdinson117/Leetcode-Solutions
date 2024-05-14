#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if(n == 1) {
        return true;
    }
    if((n == 0) || (n % 2 != 0)) {
        return false;
    }
    return isPowerOfTwo(n / 2);
}

int main(void) {
    int n;
    cin >> n;
    if(isPowerOfTwo(n)) cout << "true";
    else cout << "false";
    return 0;
}

// MATH | BIT MANIPULATION | RECURSION

// Example 1:
// Input: n = 1
// Output: true
// Explanation: 20 = 1

// Example 2:
// Input: n = 16
// Output: true
// Explanation: 24 = 16

// Example 3:
// Input: n = 3
// Output: false