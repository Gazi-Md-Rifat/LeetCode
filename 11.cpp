
int maxArea(vector<int>& height) { // time O(n^2);
    int area = 0;
    for (int i = 0; i < height.size() - 1; i++){
        for (int j = i + 1; j < height.size(); j++){
            int m = min(height[i], height[j]);
            area = max(area, m * (j - i));
        }
    }
    return area;
}

int something_new(vector<int>& height) { // time O(n);

	int l = 0, r = height.size() - 1;
	int area = 0;
	
	while (l < r){
		int curarea = min(height[l], height[r]) * (r - l);
		area = max(area, curarea);
		if (height[l] < height[r]){
			l++;
		}
		else {
			r--;
		}

	}

	return area;
}
