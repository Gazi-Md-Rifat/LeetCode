class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for(int i = 0; i < operations.size(); i++){
            for (int j = 0; j < 3; j++){
                if (operations[i][j] == '-'){
                    ans--;
                    break;
                }
                else if (operations[i][j] == '+'){
                    ans++;
                    break;
                }
            }
        }       
        return ans;
    }
};