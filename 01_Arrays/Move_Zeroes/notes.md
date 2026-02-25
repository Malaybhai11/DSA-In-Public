/*
-------------------------------------------------------
Approach 2: Two Pointer (Optimal)
-------------------------------------------------------
Time Complexity: O(n)
Space Complexity: O(1)

Idea:
Keep a pointer 'j' for position of next non-zero.
Swap when non-zero is found.
*/

void moveZeroesOptimal(vector<int>& nums) {
    int j = 0;  // position for next non-zero

    for (int i = 0; i < nums.size(); i++) {

        if (nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}
