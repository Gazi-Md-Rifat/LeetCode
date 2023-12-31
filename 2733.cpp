class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if (nums.size() > 2){
            sort(nums.begin(), nums.end());
            return nums[1];
        }
        return -1;
    }
};