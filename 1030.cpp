class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) { // overall O(n * m) * log(n * m)
        multimap<int, pair<int, int>> result;
        vector<vector<int>> ans;

        for (int i = 0; i < rows; i++){ // O(n)
            for (int j = 0; j < cols; j++){ // O(m)
                int dis = abs(i - rCenter) + abs(j - cCenter);
                result.insert({dis,{i, j}}); // O(log x) . x = n * m;
            }
        }

        multimap<int, pair<int, int>> :: iterator it = result.begin();

        for (it; it != result.end(); it++){
            ans.push_back({(*it).second.first, (*it).second.second});
        }

        return ans;
    }
};

// ChatGPT 

/* 
If you use a vector of vectors of pairs to store the data instead of a multimap and then sort the vector at the end, the time complexity will change. Let's analyze it:

1. Storing the distances and corresponding pairs in a vector of vectors of pairs: This operation is O(rows * cols) because you iterate through each cell in the grid and store its distance and coordinates in the vector.

2. Sorting the vector of vectors of pairs: Sorting the vector would be O((rows * cols) * log(rows * cols)) since you are sorting a 2D vector of size rows * cols. 

So, the overall time complexity would be O((rows * cols) * log(rows * cols)), similar to the previous implementation using a multimap. 

suggsetion for me ------------------->>>>

However, using a vector of vectors of pairs may have better cache performance compared to a multimap, which could potentially make it faster in practice for smaller grid sizes.
*/