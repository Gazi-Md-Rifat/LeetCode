class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> ans; 
        unordered_map<int, int> data; //{data, count};

        // store value count ..
        for (int i = 0; i < nums1.size(); i++){
            if (nums1[i] == 0){
                continue;
            }
            for (int j = i + 1; j < nums1.size(); j++){
                if (nums1[i] == nums1[j]){
                    nums1[j] = 0;
                }
            }
            data[nums1[i]]++;
        }      
        for (int i = 0; i < nums2.size(); i++){
            if (nums2[i] == 0){
                continue;
            }
            for (int j = i + 1; j < nums2.size(); j++){
                if (nums2[i] == nums2[j]){
                    nums2[j] = 0;
                }
            }
            data[nums2[i]]++;
        }      
        for (int i = 0; i < nums3.size(); i++){
            if (nums3[i] == 0){
                continue;
            }
            for (int j = i + 1; j < nums3.size(); j++){
                if (nums3[i] == nums3[j]){
                    nums3[j] = 0;
                }
            }
            data[nums3[i]]++;
        }      

        unordered_map<int, int> :: iterator it = data.begin();
        for (it; it != data.end(); it++){
            if ((*it).second >= 2){
                ans.push_back((*it).first);
            }
        }

        return ans;

    }
};