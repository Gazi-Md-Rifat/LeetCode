class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int j = 1;
        for (int i = 0; i < nums.size() - 1 && j < nums.size(); i){
            if (i % 2 != 0 && nums[i] % 2 == 0){
                if (nums[j] % 2 == 0){
                    j++;
                }
                else {
                    swap(nums[i], nums[j]);
                    i++;

                }
            }ac
            else if (i % 2 == 0 && nums[i] % 2 != 0){
                if (nums[j] % 2 != 0){
                    j++;
                }
                else {
                    swap(nums[i], nums[j]);
                    i++;
                }
            }
            else {
                i++;
                j++;
            }
        }
        return nums;
    }
};