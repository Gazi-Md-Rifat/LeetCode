class Solution {
public:
    int subtractProductAndSum(int n) {
        int diff = 0;
        int sum = 0, product = 1;
        while (n > 0){
            int rem = n % 10;
            n = n / 10;
            sum = sum + rem;
            product = product * rem;
        }
        diff = product - sum;
        return diff;
    }
};