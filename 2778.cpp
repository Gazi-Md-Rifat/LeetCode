class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum = 0;
        for (int i = 1; i <= nums.size(); i++){
            if (nums.size() % i == 0){
                sum = sum + pow(nums[i - 1], 2);
            }
        }
        return sum;
    }
};