class Solution {
public:
    vector<int> resultArray(vector<int>& nums) { // O(n).
        vector<int> result; 
        vector<int> arr1 = {nums[0]};
        vector<int> arr2 = {nums[1]};
        for (int i = 2; i < nums.size(); i++){
            if (arr1[arr1.size() - 1] > arr2[arr2.size() - 1]){
                arr1.push_back(nums[i]);
            }
            else {
                arr2.push_back(nums[i]);
            }
        }

        for (int i = 0; i < nums.size(); i++){
            if (i < arr1.size()){
                result.push_back(arr1[i]);
            }
            else {
                result.push_back(arr2[i - arr1.size()]);
            }
        }

        return result;
    }
};