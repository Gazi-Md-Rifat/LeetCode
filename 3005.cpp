class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        // nums[i] is small thats why i use vector .so my complexity is O(n). if my nums[i] will be long long it or big and my nums.size() is small this time i use unordered_map. this time i just travel my nums and sotre key as nums[i] and count. then angain start loop and find the maximum or my expected ans.this time also time complexity will be O(n) but this time n will be nums.size() that is small as compare to nums[i]...
        int maxFrequency = INT_MIN;
        int ans = 0;
        vector<int> data(101, 0);
        for (int i = 0; i < nums.size(); i++){
            maxFrequency = max(++data[nums[i]], maxFrequency); // data count increament and check max;
        }
        for (int i = 0; i < data.size(); i++){
            if (data[i] == maxFrequency){
                ans = ans + data[i];
            }
        }
        return ans;
    }
};