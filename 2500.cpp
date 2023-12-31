class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int answer = 0;     
        for (int i = 0; i < grid[0].size(); i++){
            int deleteMax = 0;
            for (int j = 0; j < grid.size(); j++){
                int maxi = 0;
                int row, col;
                for (int k = 0; k < grid[j].size(); k++){
                    if (grid[j][k] > maxi){
                        maxi = grid[j][k];
                        row = j;
                        col = k;
                    }
                }
                deleteMax = max(deleteMax, maxi);
                grid[row][col] = 0;
            }
            answer = answer + deleteMax;
        } 
        return answer;
    }
};