#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> v(2, -1);
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(nums[mid] == target) {
            if(mid == 0) {
                v[0] = mid;
                break;
            }
            else if(nums[mid - 1] != target) {
                v[0] = mid;
                break;
            }
            else {
                high = mid - 1;
            }
        }
        else if(nums[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    low = 0;
    high = n - 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(nums[mid] == target) {
            if(mid == n-1) {
                v[1] = mid;
                break;
            }
            else if(nums[mid + 1] != target) {
                v[1] = mid;
                break;
            }
            else {
                low = mid + 1;
            }
        }
        else if(nums[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return v;
}

int main(void) {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    vector<int> result = searchRange(nums, target);
    for(int i = 0; i < 2; i++) {
        cout << result[i] << " ";
    }
    return 0;
}

// ARRAY | BINARY SEARCH

// Example 1:
// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]

// Example 2:
// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]

// Example 3:
// Input: nums = [], target = 0
// Output: [-1,-1]