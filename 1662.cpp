class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a, b;

        for (int i = 0; i < word1.size() || i < word2.size(); i++){
            if (i < word1.size()){
                a = a + word1[i];
            }
            if (i < word2.size()){
                b = b + word2[i];
            }
        }
 
        return a == b;
    }
};