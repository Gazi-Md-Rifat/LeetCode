class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int left = 0, right = tokens.size() - 1;
        int score = 0;
        int ans = 0;
        sort(tokens.begin(), tokens.end());
        for (int i = 0; i < tokens.size(); i++){
            if (power >= tokens[left]){
                power = power - tokens[left];
                left++;
                score++;
            }
            else if (score != 0){
                power = power + tokens[right];
                right--;
                score--;
            }
            else {
                return 0;
            }
            ans = max(ans, score);
        } 
        return ans;
    }
};