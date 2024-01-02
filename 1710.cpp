class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int maxUnits = 0;
        multimap<int, int> data; // {units, box}. decreasing order or access first max unit;
        for (int i = 0; i < boxTypes.size(); i++){
            int units = boxTypes[i][1];
            int box = boxTypes[i][0];
            data.insert({-units, box}); // use negetive value for descending order.
        }   

        multimap<int, int> :: iterator it = data.begin();
        for (it; it != data.end() && truckSize > 0; it++){
            int b = min(truckSize, (*it).second);
            maxUnits = maxUnits + (b * -(*it).first); // now unit convert neg to pos.
            truckSize = truckSize - b;
        }
        return maxUnits;
    }
};