class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int count = 0;
        int boundary = 0;
        for (int i = 0; i < nums.size(); i++){
            boundary = boundary + nums[i];
            if (boundary == 0){
                count++;
            }
        }
        return count;
    }
};