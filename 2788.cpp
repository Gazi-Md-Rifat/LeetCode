class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;
        for (int i = 0; i < words.size(); i++){
            string s = words[i];
            string split = "";
            for (int j = 0; j < s.size(); j++){
                if (s[j] != separator){
                    split = split + s[j]; // append s[j] with split.
                }
                else {
                    if (split.size() > 0){
                        ans.push_back(split);
                        split = "";
                    }
                }
            }
            if (split.size() > 0){ // for now separator find..just solid word.
                ans.push_back(split);
            }
        }
        return ans;
    }
};