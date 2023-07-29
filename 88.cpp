// class Solution
// {
// public:
// 	void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) // Time Complexcity is : O(n + m log n)...
// 	{
// 		for (int i = 0; i < n; i++) // O(n)..
// 		{
// 			nums1[m + i] = nums2[i];
// 		}
// 		sort(nums1.begin(), nums1.end()); // O(m log m)...
// 		return;
// 	}
// };

// ...................... LESS TIME COMPEXITY.............................

class Solution
{
public:
	void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) // Time Complexcity is : O(m + n)...
	{
		int i = m - 1;
		int j = n - 1;
		int k = m + n - 1;
		while (j >= 0) // k can decrease till (m + n) to 0....which means k travase (m + n) time... or every statement i decrease i or j ...i or j can decrease till 0..thats mean we travarse (i + j) time.. which equal to (m + n)...
		{
			if (i >= 0 && nums1[i] > nums2[j])
			{
				nums1[k] = nums1[i];
				k--;
				i--;
			}
			else
			{
				nums1[k] = nums2[j];
				k--;
				j--;
			}
		}
		return;
	}
};