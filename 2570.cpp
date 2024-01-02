class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        int list1 = 0, list2 = 0; 
        while(list1 < nums1.size() || list2 < nums2.size()){
            vector<int> temp(2);
            if (list1 < nums1.size() && list2 < nums2.size()){
                if (nums1[list1][0] == nums2[list2][0]){
                    temp[0] = nums1[list1][0]; // nums1 and nums2 id is same;
                    temp[1] = nums1[list1][1] + nums2[list2][1];
                    list1++;
                    list2++;
                }
                else if (nums1[list1][0] < nums2[list2][0]){
                    temp[0] = nums1[list1][0];
                    temp[1] = nums1[list1][1];
                    list1++;
                }
                else {
                    temp[0] = nums2[list2][0];
                    temp[1] = nums2[list2][1];
                    list2++;
                }
            }
            else if (list1 < nums1.size()){
                temp[0] = nums1[list1][0];
                temp[1] = nums1[list1][1];
                list1++;
            }
            else {
                temp[0] = nums2[list2][0];
                temp[1] = nums2[list2][1];
                list2++;
            }
            ans.push_back(temp);
        }    
        return ans;
    }
};
// i can use map and sort it id wise. but it take more time than what i used now.i complete using while loop O(n) time..