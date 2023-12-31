class Solution {
public:

    void separet(int n, vector<int> &ans){
        if (n == 0){
            return;
        }
        separet(n/10, ans);
        ans.push_back(n % 10);
        return;
    }


    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++){
            separet(nums[i], ans);
        }
        return ans;
    }
};