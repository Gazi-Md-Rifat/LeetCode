class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans(2);
        vector<int> temp(grid.size() * grid.size() + 1);
        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[i].size(); j++){
                temp[grid[i][j]]++;
            }
        }
        for (int i = 1; i <= temp.size(); i++){
            if (ans[0] != 0 && ans[1] != 0){ // this condition don't reduce time..but it just for not need taravel if i get my missing number and double number..
                return ans;
            }
            if (temp[i] == 0){
                ans[1] = i;
            }
            else if (temp[i] == 2){
                ans[0] = i;
            }
        }
        return ans;
    }
};