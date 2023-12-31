// find how many value mathch not same data exist how many time..
// ex =  num1 = 1,2,3,1,2,3 num2 = 2,2,2,2,2; ans is 1 value match each eother that is 2..1 data match many time in nums2 . i need how many data not howm many times;

class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(2);
        for (int i = 0; i < nums1.size(); i++){
            for (int j = 0; j < nums2.size(); j++){
                if (nums1[i] == nums2[j]){
                    ans[0]++;
                    break;
                }
            }
        }

        for (int i = 0; i < nums2.size(); i++){
            int count = 0;
            for (int j = 0; j < nums1.size(); j++){
                if (nums2[i] == nums1[j]){
                    ans[1]++;
                    break;
                }
            }
        }
        return ans;
    }
};
