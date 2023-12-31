class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.length();
        int maxi = n;
        int minNum = 0;
        vector<int> perm(n + 1);
        for (int i = 0; i <= n; i++){
            if (i == n){
                // minNum and maxi end of the same and absence number 0 to s.size().
                perm[i] = minNum;
                // perm[i] = maxi;
                break;
            }
            if (s[i] == 'I'){
                perm[i] = minNum;
                minNum++;
            }
            else {
                perm[i] = maxi;
                maxi--;
            }
        }   
        return perm;
    }
};