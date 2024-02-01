class Solution {
public:
    int replace(vector<int> & vec, int idx){
        int maxi = -1;
        for (idx; idx < vec.size(); idx++){
            maxi = max(maxi, vec[idx]);
        }
        return maxi;
    }
    vector<int> replaceElements(vector<int>& arr) {
        
        for (int i = 0; i < arr.size(); i++){
            arr[i] = replace(arr, i + 1);
        }
        return arr;
    }
};