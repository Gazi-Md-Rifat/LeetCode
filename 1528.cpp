class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans;
        // string result = s;
        vector<char> temp(s.size());
        for (int i = 0; i < s.size(); i++){ //  s and indices size is same;
            temp[indices[i]] = s[i];
            // result[indices[i]] = s[i];
        }  
        for (int i = 0; i < temp.size(); i++){
            ans = ans + temp[i];
        }
        return ans; // return result. // time coplexity is same..
    }
};