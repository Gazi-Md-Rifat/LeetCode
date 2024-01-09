class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> ans;
        for (int k = 0; k < queries.size(); k++){
            int count = 0;
            for (int i = 0; i < nums.size(); i++){
                int sum = 0;
                int c = 0;
                for (int j = 0; j < nums.size(); j++){
                    if (sum + nums[j] <= queries[k]){
                        count++;
                        sum = sum + nums[j];
                    }
                    else {
                        break;
                    }
                }
                count = max(c, count);
            }      
            ans.push_back(count);
        }
    }
};