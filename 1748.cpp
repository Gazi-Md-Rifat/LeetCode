class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        vector<int> temp(100 + 1);
        for (int i = 0; i < nums.size(); i++){
            temp[nums[i]]++;
        }      
        for (int i = 0; i <= 100; i++){
            if (temp[i] == 1){
                sum = sum + i;
            }
        }
        return sum;
    }
};