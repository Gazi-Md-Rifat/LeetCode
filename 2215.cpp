class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;

        // check nums1
        vector<int> temp;
        unordered_set<int> track;
        for (int i = 0; i < nums1.size(); i++){
            int j = 0;
            if (track.empty() || track.find(nums1[i]) == track.end()){
                bool is = true;
                for (j; j < nums2.size(); j++){
                    if (nums1[i] == nums2[j]){
                        is = false;
                        break;
                    }
                }
                if (is){
                    temp.push_back(nums1[i]);
                }
                track.insert(nums1[i]);
            }
        }   
        ans.push_back(temp);

        // check nums2
        vector<int> temp2;
        unordered_set<int> track2;   
        for (int i = 0; i < nums2.size(); i++){
            int j = 0;
            bool is = true;
            if (track2.empty() || track2.find(nums2[i]) == track2.end()){
                for (j; j < nums1.size(); j++){
                    if (nums2[i] == nums1[j]){
                        is = false;
                        break;
                    }
                }
                if (is){
                    temp2.push_back(nums2[i]);
                }
                track2.insert(nums2[i]);
            } 
        }
        ans.push_back(temp2);


        return ans;
    }
};