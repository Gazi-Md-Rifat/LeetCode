class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2 * n);

        for (int i = 0, j = 0; i < n; i++, j = j + 2){
            ans[j] = nums[i];
            ans[j + 1] = nums[i + n];
        }
        return ans;
    }
};