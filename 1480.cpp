class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++){
            ans.push_back(sum = sum + nums[i]); // sum increase and push the ans container. 
        }
        return ans;
    }
};