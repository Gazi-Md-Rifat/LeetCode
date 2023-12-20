class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int sum = INT_MAX;
        for (int i = 0; i < prices.size() - 1; i++){
            for (int j = i + 1; j < prices.size(); j++){
                if (prices[i] + prices[j] <= money){
                    sum = min(prices[i] + prices[j], sum);
                }
            }
        }
        if (sum == INT_MAX){
            return money;
        }
        return money - sum;
    }
};