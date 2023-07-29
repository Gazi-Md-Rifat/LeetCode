class Solution
{
public:
	bool isPalindrome(string s)
	{
		int rev_idx = s.length() - 1;
		int for_idx = 0;
		string forward = "";
		string backward = "";
		int n = s.size();
		for (int i = 0; i < n; i++)
		{
			if (((int)s[i] >= 65 && (int)s[i] <= 90) || ((int)s[i] >= 97 && (int)s[i] <= 122) || ((int)s[i] >= 48 && (int)s[i] <= 57))
			{
				forward += (char)tolower(s[i]);
			}
			if (((int)s[rev_idx] >= 65 && (int)s[rev_idx] <= 90) || ((int)s[rev_idx] >= 97 && (int)s[rev_idx] <= 122) || ((int)s[rev_idx] >= 48 && (int)s[rev_idx] <= 57))
			{
				backward += (char)tolower(s[rev_idx]);
			}
			rev_idx--;
		}
		if (forward == backward)
		{
			return true;
		}
		return false;
	}
};