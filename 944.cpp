class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count = 0;

        // taravel every row for single coloum
        for (int i = 0; i < strs[0].size(); i++){
            for (int j = 1; j < strs.size(); j++){
                if ((int)strs[j][i] < (int)strs[j - 1][i]){ // check ascii code.. .
                    count++;
                    break;
                }
            }
        }   
        return count;
    }
};