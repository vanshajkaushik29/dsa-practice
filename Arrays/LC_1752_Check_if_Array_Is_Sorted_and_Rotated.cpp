/*
LeetCode 1752 - Check if Array Is Sorted and Rotated

Approach:
Count the number of positions where nums[i] > nums[i+1].
For a sorted and rotated array, this can happen at most once.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }

        return count <= 1;
    }
};