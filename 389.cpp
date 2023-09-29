class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end()); // O(N log N)
        sort(t.begin(), t.end()); // O(N log N)
        for (int i = 0; i < t.length(); i++){ // O(N) . n = t.length();
            if (i > s.length()){
                break;
            }
            if (s[i] != t[i]){
                return t[i];
            }
        }
        return t[t.length()];
    }
   
};
// optimized code and less time complexity
/*
    char findTheDifference(string s, string t) { // O(N) .. n = t.length();
        int sum_s = 0; int sum_t = 0;
        for (int i = 0; i < t.length(); i++){
           sum_t += t[i];
           if (i > s.length()){continue;}
           sum_s += s[i];
        }
        return sum_t - sum_s;
    }
*/