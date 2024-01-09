class Solution {
public:

    int greaterFind(vector<int> &arr, int j, int data){
        for (j; j < arr.size(); j++){
            if (arr[j] > data){
                return arr[j];
            }
        }
        return 0;
    }

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++){
            int greater = 0;
            for (int j = 0; j < nums2.size(); j++){
                if (nums2[j] == nums1[i] && j < nums2.size() - 1){
                    greater = greaterFind(nums2, j + 1, nums1[i]);
                    break;
                }
            }
            if (greater > 0){
                ans.push_back(greater);
            }
            else {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};