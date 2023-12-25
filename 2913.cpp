// ------------ optimized code------------------
// class Solution {
// public:
// int sumCounts(vector<int>& nums) {
//     int ans = 0, count = 0;
//     for(int i = 0; i < nums.size(); ++i){
//         unordered_map<int, int> ump; count = 0;
//         for(int j = i; j < nums.size(); ++j){
//             ump[nums[j]]++;
//             if(ump[nums[j]] == 1) count++;
//             ans += count*count;
//         }
//     }
//     return ans;
// }
// };



// my code ..it accepted but i think its less optimized and take much time
class Solution {
public:

    int distrinctFind(vector<int> & nums, int i, int j){
        unordered_set<int> distrinct;
        for (i; i < j; i++){
            distrinct.insert(nums[i]);
        }
        return distrinct.size();
    }
    int sumCounts(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for (int i = 1; i <= n; i++){
            for (int j = 0; j <= nums.size() - i; j++){
                int ds = distrinctFind(nums, j, j + i);
                sum = sum + pow(ds, 2);
            }
        }

        return sum;
    }
};