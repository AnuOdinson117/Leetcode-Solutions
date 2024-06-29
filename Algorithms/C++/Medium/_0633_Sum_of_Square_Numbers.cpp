#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int n) {
    int root = sqrt(n);
    if((root * root) == n) {
        return true;
    }
    else {
        return false;
    }
}

bool judgeSquareSum(int c) {
    int x = 0;
    int y = c;
    while(x <= y) {
        if(isPerfectSquare(x) && isPerfectSquare(y)) {
            return true;
        }
        else if(!isPerfectSquare(y)) {
            y = (int)sqrt(y) * (int)sqrt(y);
            x = c - y;
        }
        else {
            x = ((int)sqrt(x) + 1) * ((int)sqrt(x) + 1);
            y = c - x;
        }
    }
    return false;
}

int main(void) {
    int c;
    cin >> c;
    if(judgeSquareSum(c)) {
        cout << "true";
    }
    else {
        cout << "false";
    }
    return 0;
}

// MATH | TWO POINTERS | BINARY SEARCH

// Example 1:
// Input: c = 5
// Output: true
// Explanation: 1 * 1 + 2 * 2 = 5

// Example 2:
// Input: c = 3
// Output: false