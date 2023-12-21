class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) { // time complexity is O(row * col * 3^2);
        vector<vector<int>> ans;
        for (int i = 0; i < grid.size() - 2; i++){
            vector<int> temp;
            for (int j = 0; j < grid[0].size() - 2; j++){
                int maxVal = 0;
                for (int k = i; k < i + 3; k++){
                    for (int r = j; r < j + 3; r++){
                        maxVal = max(maxVal, grid[k][r]);
                    }
                }
                temp.push_back(maxVal);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};