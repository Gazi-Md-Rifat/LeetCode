class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != i){
                missing = i;
                break;
            }
        }      
        return missing;
    }
};