class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) { // overall O(n log n)
        sort(nums.begin(), nums.end()); // O(n log n)
        vector<int> ans;
        int track = 0;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++){ // O(n)
            sum = sum + nums[i];
        }      
        for (int i = nums.size() - 1; i >= 0; i--){ // O(n)
            int n = nums[i];
            track = track + n;
            sum = sum - n;
            ans.push_back(n);
            if (sum < track){
                break;
            }
        }
        return ans;
    }
};