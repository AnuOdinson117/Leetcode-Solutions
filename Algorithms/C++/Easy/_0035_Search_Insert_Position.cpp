#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size();
    while(low < high) {
        int mid = low + (high - low) / 2;
        if(nums[mid] == target) {
            return mid;
        }
        else if(nums[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid;
        }
    }
    return low;
}

int main(void) {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> target;
    cout << searchInsert(nums, target);
}

// ARRAY | BINARY SEARCH

// Example 1:
// Input: nums = [1,3,5,6], target = 5
// Output: 2

// Example 2:
// Input: nums = [1,3,5,6], target = 2
// Output: 1

// Example 3:
// Input: nums = [1,3,5,6], target = 7
// Output: 4