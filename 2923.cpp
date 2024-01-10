class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n = grid.size(); // grid[n][n];
        int idx = 0;
        int maxi = 0;
        for (int i = 0; i < n; i++){
            int count = 0;
            for (int j = 0; j < n; j++){
                if (grid[i][j] == 1){
                    count++;
                }
            }
            if (count > maxi){
                idx = i;
                maxi = count;
            }
        }
        return idx;
    }
};