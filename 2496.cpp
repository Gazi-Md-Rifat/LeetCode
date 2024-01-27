class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int value = 0;

        for (int i = 0; i < strs.size(); i++){
            int length = 0;
            for (int j = 0; j < strs[i].size(); j++){
                if ((strs[i][j] - '0') >= 0 && (strs[i][j] - '0' <= 9)){
                    length = (length * 10) + (strs[i][j] - '0');  // last digit.
                }
                else if((int)strs[i][j] >= 97 && (int)strs[i][j] <= 122){
                    length = strs[i].size();
                    break;
                }
            }
            value = max(value, length);
        }
        return value;
    }
};