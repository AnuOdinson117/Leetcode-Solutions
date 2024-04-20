#include <iostream>
#include <vector>
using namespace std;

void combination(vector<vector<int>>& ans, vector<int> v, vector<int>& candidates, int target, int idx) {
    if(target == 0) {
        ans.push_back(v);
        return;
    }
    if(target < 0) {
        return;
    }
    for(int i = idx; i < candidates.size(); i++) {
        v.push_back(candidates[i]);
        combination(ans, v, candidates, target - candidates[i], i);
        v.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> v;
    combination(ans, v, candidates, target, 0);
    return ans;
}

int main(void) {
    int n;
    cin >> n;
    vector<int> candidates(n);
    for(int i = 0; i < n; i++) {
        cin >> candidates[i];
    }
    int target;
    cin >> target;
    vector< vector<int> > ans = combinationSum(candidates, target);
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// ARRAY | BACKTRACKING

// Example 1:
// Input: candidates = [2,3,6,7], target = 7
// Output: [[2,2,3],[7]]
// Explanation:
// 2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
// 7 is a candidate, and 7 = 7.
// These are the only two combinations.

// Example 2:
// Input: candidates = [2,3,5], target = 8
// Output: [[2,2,2,2],[2,3,3],[3,5]]

// Example 3:
// Input: candidates = [2], target = 1
// Output: []