#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    int prev[n];
    prev[0] = -1;
    int max = height[0];
    for(int i = 1; i < n; i++) {
        prev[i] = max;
        if(max < height[i]) {
            max = height[i];
        }
    }
    prev[n - 1] = -1;
    max = height[n - 1];
    for(int i = n - 2; i >= 0; i--) {
        if(max < prev[i]) {
            prev[i] = max;
        }
        if(max < height[i]) {
            max = height[i];
        }
    }
    int water = 0;
    for(int i = 1; i < n - 1; i++) {
        if(height[i] < prev[i]) {
            water = water + (prev[i] - height[i]);
        }
    }
    return water;
}

int main(void) {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << trap(v);
}

// ARRAY | TWO POINTERS | DYNAMIC PROGRAMMING | STACK | MONOTONIC STACK

// Example 1:
// Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
// Output: 6
// Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.

// Example 2:
// Input: height = [4,2,0,3,2,5]
// Output: 9