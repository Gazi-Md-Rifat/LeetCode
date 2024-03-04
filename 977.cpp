class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++){ // O(n)
            nums[i] = pow(abs(nums[i] - 0), 2);
        }
        sort(nums.begin(), nums.end()); // O(n log n)

        return nums;
    }
};