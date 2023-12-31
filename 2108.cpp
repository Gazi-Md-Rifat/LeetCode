class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans = "";
        for (int i = 0; i < words.size(); i++){
            string temp = words[i];
            reverse(temp.begin(), temp.end());
            if (words[i] == temp){
                ans = words[i];
                break;
            }
        }
        return ans;
    }
};