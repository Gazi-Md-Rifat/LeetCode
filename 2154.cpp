class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        for (int i = 0; i < nums.size(); i++){
            for (int j = i; j < nums.size(); j++){
                if (nums[j] == original){
                    original = 2 * original;
                }
            }
        }      
        return original;
    }
};