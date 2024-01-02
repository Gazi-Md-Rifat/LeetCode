class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) { // O(n * m) + O(n) ---> O(n * m);
        vector<int> ans;
        unordered_set<int> data;
        for (int i = 0; i < nums1.size(); i++){ // O(n)
            for (int j = 0; j < nums2.size(); j++){ // O(m);
                if (nums1[i] == nums2[j]){
                    data.insert(nums1[i]); // nums1[i] and nums2[i] is same..
                    break;
                }
            }
        }      
        unordered_set<int> :: iterator it = data.begin();
        for (it; it != data.end(); it++){ // O(n);
            ans.push_back(*it);
        }
        return ans;
    }
};