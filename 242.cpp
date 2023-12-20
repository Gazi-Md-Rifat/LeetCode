class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s == t){
            return true;
        }
        else if (s.size() == t.size()){
            for (int i = 0; i < s.size(); i++){
                for (int j = 0; j < t.size(); j++){
                    if (s[i] == t[i]){
                        t.erase(i, 1);
                    }
                }
            }
        }
        if (t.empty()){
            return true; 
        }
        return false;
    }
};