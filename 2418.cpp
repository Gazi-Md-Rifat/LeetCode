class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> result;
        map<int, string> data;
        int n = names.size(); // name and heights size is same;
        for (int i = 0; i < n; i++){
            data.insert({-heights[i], names[i]}); // heights[i] is positive .so by default data store in ascending order..thats mean we need to access data end to begin in map.thta is much harder..so i can store height[i] negative.so if i make my data positive to negative thats mean my max positive data will be min data in negative mode.sum of all i can store my data in descending order .i need just extra work that is when i prnt data then just convert data negative to positive what i was changed positive to negative for my advantage.
        }
        map<int, string> :: iterator it = data.begin();
        for (it; it != data.end(); it++){
            result.push_back((*it).second); // store name
            // result.push_back(it->second); // point can access data using -> insted of *it.
        }

        return result;

    }
};