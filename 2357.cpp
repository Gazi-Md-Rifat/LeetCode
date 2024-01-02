class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int operations = 0;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++){
            int x = nums[i];
            if (x == 0){
                continue;
            }
            for (int j = i; j < nums.size(); j++){
                nums[j] = nums[j] - x;
            }
            operations++;
        }
        return operations;
    }
};