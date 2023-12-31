class Solution {
public:
    int findGCD(vector<int>& nums) {
        int GCD = 1;
        int maxi = 0, mini = INT_MAX;
        for (int i = 0; i < nums.size(); i++){
            maxi = max(maxi, nums[i]);
            mini = min(mini, nums[i]);
        }      
        int n = mini;
        while (n > 1){
            if (mini % n == 0 && maxi % n == 0){
                GCD = n;
                break;
            }
            n--;
        }
        return GCD;
    }
};