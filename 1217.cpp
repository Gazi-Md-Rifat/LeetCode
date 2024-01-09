class Solution {
public: 
 // i move my all data in each idx and check which inx give me less cost if i store all data in this idx.
    int minCostToMoveChips(vector<int>& position) {
        int cost = INT_MAX;
        for (int i = 0; i < position.size(); i++){
            if (i < position.size() - 1 && position[i] == position[i + 1]){
                continue;
            }
            int temp = 0;
            for (int j = 0 ; j < position.size(); j++){
                int dis = abs(position[i] - position[j]);
                temp = temp + (dis % 2);
            }
            cost = min(cost, temp);
        }
        return cost;
    }
};