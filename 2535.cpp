class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;
        for (int i = 0; i < nums.size(); i++){
            elementSum = elementSum + nums[i];
        
            int n = nums[i];
            while(n > 0){
                digitSum = digitSum + (n % 10);
                n = n / 10;
            }
        }
        return elementSum - digitSum;
    }
};