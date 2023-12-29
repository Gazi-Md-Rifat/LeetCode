class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int sum = 0;
        int maxNum = 0;
        for (int i = 0; i < nums.size(); i++){
            maxNum = max(nums[i], maxNum);
        }      

        for (int i = 1; i <= k; i++){
            sum = sum + maxNum;
            maxNum++;
        }

        return sum;
    }
};