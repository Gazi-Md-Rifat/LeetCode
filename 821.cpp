class Solution {
public:

    void findIndex(int &a, int &b, string &s, char &c, bool track){
        for (int i = a; i < s.size(); i++){
            if (s[i] == c && track){
                a = i;
                track = false;
            }
            else if (s[i] == c && !track){
                b = i;
                track = true;
                break;
            }
        }
    }
    vector<int> shortestToChar(string s, char c) {
        vector<int> path;
        bool track = true;
        int a = 0; 
        int b = 0;
        findIndex(a, b, s, c, track);

        for (int i = 0; i < s.size(); i++){
            int x = min(abs(a - i), abs(b - i));
            path.push_back(x);
            if (i == b){
                findIndex(i, b, s, c, track);
            }
        }
        return path;
    }
};