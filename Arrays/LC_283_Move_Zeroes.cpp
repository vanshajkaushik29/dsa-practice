/*
LeetCode 283 - Move Zeroes

Brute Force:
1. Store all non-zero elements in a temporary array.
2. Copy them back to nums.
3. Fill remaining positions with 0.

Time Complexity: O(n)
Space Complexity: O(n)

--------------------------------------------------

Optimal Approach (Two Pointers):
Maintain pointer j for the next non-zero position.
Whenever a non-zero element is found, swap it with nums[j].

Time Complexity: O(n)
Space Complexity: O(1)
*/


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};