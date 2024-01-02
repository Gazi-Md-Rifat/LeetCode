class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;
        vector<int> temp = heights;
        sort(temp.begin(), temp.end());
        for (int i = 0; i < heights.size(); i++){
            if (temp[i] != heights[i]){ // just check given array as i take with sort version of taken array.count expected error..
                count++;
            }
        }
        return count;
    }
};