class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        string target;
        
        for (int i = 0; i < paths.size(); i++){
            int count = 0;
            target = paths[i][1];
            
            for (int j = 0; j < paths.size(); j++){
                if (paths[j][0] == target){
                    count++;
                    break;
                }
            }
            if(count == 0){
                break;
            }
        }
        return target;
    }
};