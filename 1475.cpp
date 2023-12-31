class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> discount;
        for (int i = 0; i < prices.size(); i++){
            int dis = prices[i];
            for (int j = i + 1; j < prices.size(); j++){
                if (prices[i] >= prices[j]){
                    dis = dis - prices[j];
                    break;
                }
            }
            discount.push_back(dis);
        }      
        return discount;
    }
};