class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        for (int i = 0; i < mat.size(); i++){
            for (int j = 0; j < mat[0].size(); j++){
                if (i == j){ // left to right diagonal or primary diagonal
                    sum = sum + mat[i][j];
                }
                if (mat.size() - 1 - j != j && mat.size() - 1 - j == i){ // right to left diagonal or seconday diagonal.
                    sum = sum + mat[i][j];
                }
            }
        }
        return sum;
    }
};