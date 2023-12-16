class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) { // total O(n^2);
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++){ // O(n);
            int count = 0;
            for (int j = 0; j < nums.size(); j++){ // O(n) for each O(1);
                if (nums[i] > nums[j]){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};