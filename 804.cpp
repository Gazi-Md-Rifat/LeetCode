class Solution {
public:

    string convertion(string s, vector<string> &code){
        string result;
        for (int i = 0; i < s.size(); i++){
            int n = (int)(s[i] - 'a');
            result = result + code[n];
        }

        return result;
    }
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morseCode = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        int count = 0;
        unordered_set<string> data;

        for (int i = 0; i < words.size(); i++){
            string code = convertion(word[i], morseCode);
            if (data.end() == data.find(code)){
                count++;
                data.insert(code);
            }
        }
        return count;
    }
};