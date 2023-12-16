class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int wordCount = 0;

        for (int i = 0; i < sentences.size(); i++){
            int temp = 1;
            for (int j = 0; j < sentences[i].size(); j++){
                if(sentences[i][j] == ' '){
                    temp++;
                }
            }
            wordCount = max(wordCount, temp);
        }      
        return wordCount;
    }
};