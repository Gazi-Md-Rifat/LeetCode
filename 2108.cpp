class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans = "";
        for (int i = 0; i < words.size(); i++){
            string str = words[i];
            string temp = "";
            for (int j = 0; j < str.size(); j++){
                temp = str[j] + temp;
            }
            if (temp == words[i]){
                return temp;
            }
        }     
        return ans;
    }
};
