class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for (int i = 0; i < words.size(); i++){
            if (words[i].find(x) <= words[i].size()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};