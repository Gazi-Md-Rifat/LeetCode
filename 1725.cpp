class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int count = 0;
        int maxi = 0;
        for (int i = 0; i < rectangles.size(); i++){
            int length = min(rectangles[i][0], rectangles[i][1]);
            if (length == maxi){
                count++;
            }
            else if (length > maxi){
                maxi = length;
                count = 1;
            }
            
        }
        return count;
    }
};