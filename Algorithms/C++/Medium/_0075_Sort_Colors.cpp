#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int n = nums.size();
    int n0 = 0;
    int n1 = 0;
    int n2 = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] == 0) {
            n0++;
        }
        else if(nums[i] == 1) {
            n1++;
        }
        else {
            n2++;
        }
    }
    for(int i = 0; i < n; i++) {
        if(i < n0) {
            nums[i] = 0;
        }
        else if(i < (n0 + n1)) {
            nums[i] = 1;
        }
        else {
            nums[i] = 2;
        }
    }
}

int main(void) {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sortColors(nums);
    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}

// ARRAY | TWO POINTERS | SORTING

// Example 1:
// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]

// Example 2:
// Input: nums = [2,0,1]
// Output: [0,1,2]