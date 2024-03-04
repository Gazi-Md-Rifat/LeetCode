class Solution {
public:

    int check(char ch, string s){
        for (int i = 0; i < s.size(); i++){
            if (ch == s[i]){
                return i;
            }
        }
        return -1;
    }

    int lengthOfLongestSubstring(string s) {
        string temp = "";
        string result = "";
        int length = 0;
        
        for (int i = 0; i < s.size(); i++){
            int pos = check(s[i], temp);
            if (pos != -1){
                length = max(temp.size(), result.size());
                if (temp.size() > result.size()){ // update if my new string is greater then previous
                    result = temp;
                }
                temp = temp.substr(pos + 1, temp.size()) + s[i];
            }
            else { // for not exist repating charecter
                temp = temp + s[i];
            }
        }
        length = max(temp.size(), result.size());
        return length;
    }
};