class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans = 0;
        int i = n;
        while (1){
            if (i % n == 0 && i % 2 == 0){
                ans = i;
                break;
            }
            i++;
        }
        return ans;
    }
};