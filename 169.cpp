class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2]; // question include thata majority element exist more than n/2.. thats mean if i sort containr it can apprear till more than first half of the container or it can appear before half to end.becauge its exist mote than n/2 times..
    }
};