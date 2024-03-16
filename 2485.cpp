class Solution {
public:
    bool check(int num, int n){
        int left = 0, right = 0;
        for (int i = 1; i <= n; i++){
            if (i <= num){
                left = left + i;
            }
            if (i >= num){
                right = right + i;
            }
        }
        if (right == left){
            return true;
        }
        return false;
    }
    int pivotInteger(int n) {
        for (int i = 1; i <= n; i++){
            if (check(i, n)){
                return i;
            }
        }
        return -1;
    }
};