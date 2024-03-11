class Solution {
public:

    bool checkFormed(string word, string chars){ // overall O(m * k)
        char ch = '[';
        bool track = true;
        for (int i = 0; i < word.size(); i++){ // O(m) .. m = word.size() .. thats is words[i].size();
            for (int j = 0; j < chars.size(); j++){ // O(k) .. chars.size();
                if (word[i] == chars[j]){
                    chars[j] = ch; 
                    break;
                }
                else if (j == chars.size() - 1){
                    track = false;
                }
            }
            if (!track){
                return false;
            }
        }

        return true;
    }

    int countCharacters(vector<string>& words, string chars) { // overall O(n * m * k);
        int count = 0;
        for (int i = 0; i < words.size(); i++){ // O(n)
            if (checkFormed(words[i], chars)){
                count = count + words[i].size();
            }
        }
        return count;
    }
};