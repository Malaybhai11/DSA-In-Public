/*
Problem: Maximum Subarray
Given an integer array nums,
find the contiguous subarray with the largest sum
and return its sum.

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
Check all possible subarrays and track maximum sum.
*/

int maxSubarrayBrute(vector<int>& nums) {
    int n = nums.size();
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += nums[j];
            maxi = max(maxi, sum);
        }
    }

    return maxi;
}


/*
-------------------------------------------------------
Approach 2: Kadane’s Algorithm (Optimal)
-------------------------------------------------------
Time Complexity: O(n)
Space Complexity: O(1)

Idea:
If running sum becomes negative,
reset it to 0.
*/

int maxSubarrayKadane(vector<int>& nums) {
    int currentSum = 0;
    int maximumSum = INT_MIN;

    for (int i = 0; i < nums.size(); i++) {
        currentSum += nums[i];

        maximumSum = max(maximumSum, currentSum);

        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    return maximumSum;
}


/*
Optional Driver Code
*/

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Brute Force Result: "
         << maxSubarrayBrute(nums) << endl;

    cout << "Kadane Result: "
         << maxSubarrayKadane(nums) << endl;

    return 0;
}