class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) { //overall  O(n log n)
        vector<int> ans;
        sort(nums1.begin(), nums1.end()); // O(n log n);
        sort(nums2.begin(), nums2.end()); // O(n log n);

        for (int i = 0, j = 0; i < nums1.size() && j < nums2.size(); i, j){ // O(n)
            if (nums1[i] == nums2[j]){
                if (ans.empty() || (ans.size() >= 1 && ans[ans.size() - 1] != nums1[i])){
                    ans.push_back(nums1[i]);
                }
                i++;
                j++;
            }
            else if (nums1[i] > nums2[j]){
                j++;
            }
            else {
                i++;
            }
        }
        return ans;
    }
};


/*

TIme complexity is O(n * m)--- n = nums1.size() .. m = nums2.size()


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

*/