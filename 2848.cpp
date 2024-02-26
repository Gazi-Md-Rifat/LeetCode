class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int point = 0;
        unordered_set<int> data;
        for (int i = 0; i < nums.size(); i++){
            for (int j = nums[i][0]; j <= nums[i][1]; j++){
                data.insert(j);
            }
        }
        point = data.size();
        return point;
    }
};