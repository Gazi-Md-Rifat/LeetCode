class Solution {
public:
    int reverse(int x) {
        long long int ans = 0; // we make 64 bit variable.because if my result is greater than 32 bit int then we can store it in 64 bit..many website make here 32 bit long int variable.here the problem.this question has no testcase that value is greater than 32 bit thats why its work.but my condition was if my result is grater than 32 bit then return 0..thats mean it can be greater than 32 bit..ok..
        while (x != 0)
        {
            ans = (ans * 10) + (x % 10);
            x = x / 10;
        }
        if (ans > pow(2, 31) - 1 || ans < pow(-2, 31))
        {
            return 0;
        }
        return ans;
    }
};