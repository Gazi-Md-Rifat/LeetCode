class Solution {
public:
    string maximumOddBinaryNumber(string s) { // overall O(n)
        string ans;
        for (int i = 0; i < s.size(); i++){ // O(n)
            if (s[i] == '1'){
                ans = '1' + ans;
            }
            else{
                ans = ans + '0';
            }
        }

        ans = ans.substr(1, ans.size()) + '1'; // O(new string size)
        return ans;
    }
};