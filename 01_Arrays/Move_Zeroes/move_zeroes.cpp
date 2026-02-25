/*
Problem: Move Zeroes
Given an integer array nums,
move all 0's to the end of it
while maintaining the relative order of non-zero elements.

Language: C++
*/

#include <bits/stdc++.h>
using namespace std;

/*
-------------------------------------------------------
Approach 1: Extra Array (Brute)
-------------------------------------------------------
Time Complexity: O(n)
Space Complexity: O(n)

Idea:
Create a temporary array.
First push non-zero elements,
then push zeros.
*/

void moveZeroesBrute(vector<int>& nums) {
    vector<int> temp;

    // Store non-zero elements
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            temp.push_back(nums[i]);
        }
    }

    // Count zeros
    int zeros = nums.size() - temp.size();

    // Add zeros at the end
    while (zeros--) {
        temp.push_back(0);
    }

    nums = temp;  // Copy back
}