class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        for (int i = 0, j = 0; i < nums1.size() && j < nums2.size(); i, j){
            if (i < nums1.size() || j < nums2.size()){
                if (nums1[i] == nums2[j]){
                    return nums1[i] // or nums2[j] .they are equale
                }
                else if (nums1[i] < nums[2]){
                    i++;
                }
                else {
                    j++;
                }
            }
        }
        return -1;
    }
};