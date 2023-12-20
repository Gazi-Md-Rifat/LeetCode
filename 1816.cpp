class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans;
        int track = 1;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == ' '){
                track++;
            }
            if (track > k){
                break;
            }
            ans = ans + s[i];
        }
        return ans;
    }
};