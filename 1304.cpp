class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        int half = -(n / 2);
        for (int i = 0; i < n; i++){
            ans.push_back(half);

            half++;
            if (n % 2 == 0 && half == 0){
                half++;
            }
        }      
        return ans;
    }
};