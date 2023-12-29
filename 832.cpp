class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        // i need to do first reverse the nested vector and invert the every idx data 0 to 1 or vice versa.
        for (int i = 0; i < image.size(); i++){ // O(image.size())
            int n = image[i].size();
            for (int j = 0; j < image[i].size() / 2 + 1; j++){ // O(image[i].size()/2);
                if (j < n - j - 1){ // i just do two thing in one time.i reverse vector and invert idx data 0 to 1 or vice versa.
                    swap(image[i][j], image[i][n - j - 1]); // swap data for revese order.
                    // invert data 0 to 1 or vice versa.
                    image[i][j] = !image[i][j];
                    image[i][n - j - 1] = !image[i][n - j - 1];
                }
                else if (j == n - j - 1){ // this case for odd length size.because no odd left one data in last.so i don't need to swap it.its already right place.thats why i just invert data.
                    image[i][n - j - 1] = !image[i][n - j - 1];
                }
            }
        }
        return image;
    }
};