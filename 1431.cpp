class Solution {
public:
    int findMax(vector<int> &candies){
        int n = candies[0];

        for (int i = 0; i < candies.size(); i++){
            n = max(n, candies[i]);
        }
        return n;
    }

    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;

        int maxCande = findMax(candies);

        for (int i = 0; i < candies.size(); i++){
            if (maxCande <= candies[i] + extraCandies){
                result.push_back(true);
            }
            else {
                result.push_back(false);
            }
        }


        return result;
    }
};