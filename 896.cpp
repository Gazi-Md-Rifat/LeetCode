
// ----------------------------------  my implementation ----------------------------------

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if (nums.size() <= 1){
            return true;
        }
        bool indicator_1 = true;
        bool indicator_2 = true;
        // check monotone increasing 
        for (int i = 0; i < nums.size() - 1; i++){ // N-1 time run
            for (int j = i + 1; j <= i + 1; j++){ // 1 time run for each i;
    // so time complexity is O(N^1) == O(N);
                if (nums[i] <= nums[j]){
                    continue;
                }
                else{
                    indicator_1 = false;
                    break;
                }
            }
            if (indicator_1 == false){
                break;
            }
        }
        if (indicator_1 == true){
            return true;
        }
        // if not return thats mean it not monotone increasing ..
        // so its can be monotone decreasing or invalid condition..

        // check monotone decreasing
        for (int i = 0; i < nums.size() - 1; i++){ // N-1 time run
            for (int j = i + 1; j <= i + 1; j++){ // 1 time run for each i;
    // so time complexity is O(N^1) == O(N);
                if (nums[i] >= nums[j]){
                    continue;
                }                
                else {
                    indicator_2 = false;
                    break;
                }   
            }
            if (indicator_2 == false){
                return false;
            }
        } 
        // if not return thats mean monotone decreasing true;if it was false then return false before come out of loop. 
        return true;
    }
};

// total time complexity for this function is O(N) + O(N) == O(2N);