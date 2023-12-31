class Solution
{
public:
    int minOperations(vector<int> &nums){
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n - 1; i++){
            if (nums[i] >= nums[i + 1]){
                int sub = nums[i] - nums[i + 1];
                nums[i + 1] = nums[i + 1] + sub + 1;
                count = count + sub + 1;
            }
        }
        return count;
    }
};