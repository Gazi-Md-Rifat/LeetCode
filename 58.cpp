class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0; 
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
            {
                ans += 1;
            }
            if (ans != 0 && s[i] == ' ')
            {
                return ans;
            }
        }
        return ans;
    }
};