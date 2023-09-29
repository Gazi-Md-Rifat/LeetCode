class Solution {
public:
    int findDuplicate(vector<int>& nums){
        vector<int> ans(pow(10,5) + 1, 0);
        for (int i = 0; i < nums.size(); i++){
            ans[nums[i]]++;
        }
        int count;
        for (int i = 1; i < ans.size(); i++){
            if (ans[i] > 1){
                count = i;
                break;
            }
        }
          
        return count;
    }
};