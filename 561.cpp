class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i = i + 2){
            sum = sum + nums[i];
        } 
        return sum;
    }
};


// i solve it but seen answer and i cant't understand why i increase i = i + 2. all up i can't understand the logic.