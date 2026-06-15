/*
LeetCode 26 - Remove Duplicates from Sorted Array

Approach 1: Brute Force
Time Complexity: O(n log n)
Space Complexity: O(n)

Idea:
Store unique elements in a set and overwrite the array.
*/

/*
Approach 2: Optimal (Two Pointers)
Time Complexity: O(n)
Space Complexity: O(1)

Idea:
Maintain a pointer for the position of the next unique element.
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;

        for(int j = 1; j < nums.size(); j++) {
            if(nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }
        }

        return i + 1;
    }
};