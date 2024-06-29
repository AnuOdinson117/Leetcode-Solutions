#include <iostream>
#include <vector>
using namespace std;

void helper(vector<int>& nums, vector<int> ans, vector<vector<int>>& finalAns, int idx) {
    if(idx == nums.size()) {
        finalAns.push_back(ans); 
        return;
    }
    helper(nums, ans, finalAns, idx + 1);
    ans.push_back(nums[idx]);
    helper(nums, ans, finalAns, idx + 1);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> ans;
    vector<vector<int>> finalAns;
    helper(nums, ans, finalAns, 0);
    return finalAns;
}

int main(void) {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<vector<int>> ans = subsets(nums);
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// ARRAY | BACKTRACKING | BIT MANIPULATION

// Example 1:
// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

// Example 2:
// Input: nums = [0]
// Output: [[],[0]]