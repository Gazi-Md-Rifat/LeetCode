class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int count = 0;
        int leftOver = nums.size();
        for (int i = 0; i < nums.size(); i++){
            for (int j = i + 1; j < nums.size(); j++){
                if (nums[i] > -1 && nums[i] == nums[j]){
                    // remove data sign is -1
                    nums[i] = -1;
                    nums[j] = -1;
                    count++; // i and j is pair..so increase pair count.
                    leftOver = leftOver - 2; // if i remove pair from array thats mean 2 elemtn remove form total arr element
                }
            }
        }      
        /* 
        vector<int> ans(2);
        ans[0] = count;
        ans[1] = leftOver;
        */

       // return ans;
        return {count, leftOver}; // 2 size vector return 
    }
};