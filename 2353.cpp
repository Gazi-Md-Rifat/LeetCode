class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string> temp;
        for (int i = 0; i < arr.size(); i++){
            if (arr[i] == "0"){
                continue;
            }
            bool track = true;
            for (int j = i + 1; j < arr.size(); j++){
                if (arr[i] == arr[j]){
                    arr[j] = "0"; // sign of remove for not count next time.
                    track = false;
                }
            }
            if (track){
                temp.push_back(arr[i]);
            }
        }      
        if (temp.size() < k){
            return "";
        }
        return temp[k - 1];
    }
};