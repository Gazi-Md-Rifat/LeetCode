class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
        for (int i = left; i <= right && i <= words.size() - 1; i++){
            string s = words[i];
            char first = s[0];
            char last = s[s.size() - 1];
            if (first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u'){
                if (last == 'a' || last == 'e' || last == 'i' || last == 'o' || last == 'u'){
                    count++;
                }
            }
        }      
        return count;
    }
};