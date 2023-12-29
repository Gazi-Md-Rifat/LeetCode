class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        // i need to do target[index[i]] = nums[i] . if targer[index[i]] is empty..if not i need to change the position x to x + 1 and store nus[i] in x index..base case when we arrive in empty index thats mean we don't need to change position data because all data alredy change for place x index..
        int n = nums.size(); // nums and index is same length.
        vector<int> target(n, -1);
        for (int i = 0; i < n; i++){
            if (target[index[i]] != -1){
                int temp = target[index[i]];
                target[index[i]] = nums[i];
                for (int j = index[i] + 1;j < n; j++){
                    if (target[j] == -1){
                        target[j] = temp;
                        break;
                    }
                    int temp2 = target[j];
                    target[j] = temp;
                    temp = temp2;
                }
            }
            else {
                target[index[i]] = nums[i];
            }
        }
        return target;
    }
};