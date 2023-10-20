class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s_1;
        stack<char> t_1;
        for (int i = 0; i < s.size(); i++){
            if (s[i] != '#'){
                s_1.push(s[i]);
            }
            else if (!s_1.empty()){
                s_1.pop();
            }
        }
        for (int i = 0; i < t.size(); i++){
            if (t[i] != '#'){
                t_1.push(t[i]);
            }
            else if (!t_1.empty()){
                t_1.pop();
            }
        }
        if (s_1.size() != t_1.size()){
            return false;
        }

        while (!s_1.empty()){
            if (s_1.top() == t_1.top()){
                s_1.pop();
                t_1.pop();
            }
            else {
                return false;
            }
        }

        return true;
    }
};