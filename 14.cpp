class Solution
{
public:
	string longestCommonPrefix(vector<string> &strs)
	{
		if (strs.size() == 0)
		{
			return "";
		}
		else if (strs.size() == 1)
		{
			return strs[0];
		}
		string ans = strs[0];
		for (int i = 1; i < strs.size(); i++)
		{
			string temp = strs[i];
			int n = min(temp.size(), ans.size());// we can find max and travers n - 1... 
			for (int j = 0; j <= n; j++) // n - 1 time we check and next one move tell me we have no enough element for compare each other...that why we travers till n;
			{
				if (ans[j] != temp[j])
				{
					ans = ans.substr(0, j);
					break;
				}
			}
		}
		return ans;
	}
};