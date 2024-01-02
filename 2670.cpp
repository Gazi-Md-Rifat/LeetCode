class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++){
            unordered_set<int> data;
            unordered_set<int> data2;
            for (int j = 0; j <= i; j++){
                data.insert(nums[j]);
            }            

            for (int j = i + 1; j < n; j++){
                data2.insert(nums[j]);
            }

            ans.push_back(data.size() - data2.size());

        }
        return ans;
    }
};