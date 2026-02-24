/*
Problem: Two Sum
Given an array of integers nums and an integer target,
return indices of the two numbers such that they add up to target.

Language: C++
*/

#include <bits/stdc++.h>
using namespace std;

/*
-------------------------------------------------------
Approach 1: Brute Force
-------------------------------------------------------
Time Complexity: O(n^2)
Space Complexity: O(1)

Idea:
Check every pair and return indices when sum equals target.
*/

vector<int> twoSumBruteForce(vector<int>& nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {};
}

/*
-------------------------------------------------------
Approach 2: Hash Map (Optimal)
-------------------------------------------------------
Time Complexity: O(n)
Space Complexity: O(n)

Idea:
For each element, compute complement = target - nums[i].
If complement exists in hash map, we found answer.
Otherwise store current element in map.
*/

vector<int> twoSumOptimized(vector<int>& nums, int target) {
    unordered_map<int, int> mp;  // value -> index

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (mp.find(complement) != mp.end()) {
            return {mp[complement], i};
        }

        mp[nums[i]] = i;
    }

    return {};
}


/*
Optional: Driver Code (For Local Testing)
*/
int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSumOptimized(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << " " << result[1] << endl;
    }

    return 0;
}