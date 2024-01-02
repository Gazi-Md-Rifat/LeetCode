class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;
        for (int i = 0; i < words.size(); i++){
            string str = words[i];
            bool track = true;
            for (int j = 0; j < str.size(); j++){
                if (str[j] != s[j]){
                    track = false;
                    break;
                }
            }
            if (track){
                count++;
            }
        }   
        return count;
    }
};