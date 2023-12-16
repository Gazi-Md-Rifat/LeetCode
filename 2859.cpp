class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;

        for (int i = 0; i < nums.size(); i++){
            int count_1 = 0;

            // find binary representation.
            int n = i;
            while (n != 0){
                if (n % 2 == 1){
                    count_1++;
                }
                n = n/ 2;
            }

            if (count_1 == k){
                sum = sum + nums[i];
            }
        }
        return sum;
    }
};