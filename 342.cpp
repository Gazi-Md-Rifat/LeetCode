class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0){
            return false;
        }
        if (n == 1){
            return true;
        }
        double x = log(n) / log(4); // n == 4^x.. log n = log 4^x.. log n = x * log 4 .. log n / log 4 = x; ... this x is power of 4 == n.

        return (x == (int)x);
    }
};