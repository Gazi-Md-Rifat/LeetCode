class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int count = 0;
        unordered_map<int, int> data;
        for (int i = 0; i < nums.size(); i++){
            data[nums[i]]++;
        }
        int track = (*data.begin()).second;
        for (auto it = data.begin(); it != data.end(); it++){
            if (track == (*it).second){
                count = count + (*it).second;
            }
            else if (track < (*it).second){
                count = (*it).second;
                track = count;
            }
        }        

        return count;
    }
};