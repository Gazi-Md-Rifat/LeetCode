class Solution {
public:
    bool halvesAreAlike(string s) {
        int count = 0;
        for (int i = 0; i < s.size(); i++){
            if (i < s.size() / 2){
                if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] =='I' || s[i] == 'o' || s[i] =='O' || s[i] == 'u' || s[i] == 'U'){
                    count++;
                }
            }
            else {
                if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] =='I' || s[i] == 'o' || s[i] =='O' || s[i] == 'u' || s[i] == 'U'){
                    count--;
                }
            }
        }      
        if (count == 0){
            return true;
        }
        return false;
    }
};