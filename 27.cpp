// LeetCode Questioin Link :https://leetcode.com/problems/remove-element/description/



class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == val)
            {
                nums.erase(nums.begin() + i);
                i = i - 1;
            }
        }
        return nums.size();
    }
};