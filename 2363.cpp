class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) { // O(n * m) + O(n) ---> O(n * m);
        multimap<int, int> data;
        vector<vector<int>> ret;
        int n = items1.size();
        if (n < items2.size()){
            swap(items1, items2);
        }
        for (int i = 0; i < items1.size(); i++){ // O(n) . n = items1.size(); // so O(n * m);
            int  temp = 0;// use temp for if items1 value dosen't exit in items2 then we have nothig to add with items1 weigth. so 0;
            for (int j = 0; j < items2.size(); j++){ // O(m) . m = items2.size();
                if (items1[i][0] == items2[j][0]){
                    temp = items2[j][1];
                    break;
                }
            }
            int weight = items1[i][1] + temp; 
            data.insert({items1[i][0], weight}); // items1 value and items2 value is same..
        }
        // for check items2 have any value what not match with iems1
        for (int i = 0; i < items2.size(); i++){
            int n = items2[i][0];
            if (data.find(n) == data.end()){
                data.insert({items2[i][0], items2[i][1]});
            }
        }

        multimap<int, int> :: iterator it = data.begin(); 
        for (it; it != data.end(); it++){ // O(n) // n = data.size() that must == items1.size();
            vector<int> temp;
            temp.push_back((*it).first);
            temp.push_back((*it).second);
            ret.push_back(temp);
        }
        return ret;
    }
};