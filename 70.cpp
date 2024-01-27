class Solution {
public:
    // int climbStairs(int n) { // this is right approch but it take more time...
    //     if (n == 0){
    //         return 1;
    //     }
    //     if (n < 0){
    //         return 0;
    //     }

    //     return climbStairs(n - 1) + climbStairs(n - 2);
    // }

    // it takes O(n^2);
    int climbStairs(int n) { // this is right approch but it take more time...
        int ways = 1;
        for (int i = 1; i <= n; i++){
            int sum = 1;
            for (int j = i; j <= n; j++){
                sum = sum + (n - j) / (j - i);
            }
            ways = ways + sum;
        }

        return ways;
    }
};