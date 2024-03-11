class Solution {
public:
    string customSortString(string order, string s) { // O(n * m) ....n = order.size() and m = s.size()
        string ans;
        for (int i = 0; i < order.size(); i++){
            for (int j = 0; j < s.size(); j++){
                if (order[i] == s[j]){
                    ans = ans + s[j];
                    s.erase(j, 1);
                    j--;
                }
            }
        }   
        if (!s.empty()){
            ans = ans + s;
        }
        return ans;
    }
};