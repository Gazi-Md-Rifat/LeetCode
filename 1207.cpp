class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        multimap<int, int> data;
        for (int i = 0; i < arr.size(); i++){
            if (arr[i] == 0){
                continue;
            }
            int count = 1;
            for (int j = i + 1; j < arr.size(); j++){
                if (arr[i] == arr[j]){
                    count++;
                    arr[j] = 0;
                }
            }
            data.insert({count, arr[i]});
        }    
        multimap<int, int> :: iterator it = data.begin()++;
        multimap<int, int> :: iterator prev = data.begin();
        
        for (it; it != data.end(); it++){
            if ((*it).first == (*prev).first){
                return false;
            }
        }  
        return true;
    }
};