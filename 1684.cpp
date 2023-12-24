class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) { // time complexity O(n * m * k); n == array size, m = arr[i] size, k = allowed size;
        int count = 0;
        for (int i = 0; i < words.size(); i++){
            bool track = true;
            for (int j = 0; j < words[i].size(); j++){
                bool track2 = false;
                for (int k = 0; k < allowed.size(); k ++){
                    if (words[i][j] == allowed[k]){
                        track2 = true;
                        break;
                    }
                }
                if (!track2){
                    track = false;
                    break;
                }
            }
            if (track){
                count++;
            }
        }
        return count;
    }
};