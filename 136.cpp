// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int n = sizeof(nums) / sizeof(nums[0]);
//         if (n == 1)
//         {
//             return nums[0];
//         }
//         for (int i = 0; i < n; i++)   ........this algorith is right but not fullfiled question condition...condition is constant complexity and space..
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (nums[i] == nums[j])
//                 {
//                     break;
//                 }
//                 if (j == n - 1)
//                 {
//                     return nums[i];
//                 }
//             }
//         }
//         return 0; // we  never can arrive this possition.becauge we returned before came this statement...
//     }
// };

class Solution {
public:
    int singleNumber(vector<int>& nums) { 
        int res = 0;
        for(int x: nums) { // this is XOR concept....because condition is constant complexity and space...thats why i use XOR concept..
            res ^= x;
        }
        return res;
    }
};