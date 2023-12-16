class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maximum = 0;

        for (int i = 0; i < nums.size(); i++){
            for (int j = i + 1; j < nums.size(); j++){
                int sum = (nums[i] - 1) * (nums[j] - 1);
                maximum = max(sum, maximum);
            }
        }      
        return maximum;
    }
};