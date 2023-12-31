class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (nums[0] == nums[nums.size() / 2 - 1]){
            return nums[0];
        }
        return nums[nums.size() / 2];
    }
};