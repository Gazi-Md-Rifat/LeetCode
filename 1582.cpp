class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int count = 0;

        for (int i = 0; i <  mat.size(); i++){
            int one = 0;
            int zero = 0;
            for (int j = 0; j < mat[i].size(); j++){
                if (mat[i][j] == 1 && one == 0 ){
                    if (j < mat.size() && mat[j][i] == 1){
                        one = 1;
                    }
                    else if (mat[j][i] == 1){
                        one = 1;
                    }
                }
                else if (mat[i][j] == 0 && mat[j][i] == 0){
                    continue;
                }
                else {
                    break;
                }
            }
        }
    }
};