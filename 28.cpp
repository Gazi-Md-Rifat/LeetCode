class Solution
{
public:
	int strStr(string haystack, string needle)
	{
		if (haystack == needle)
		{
			return 0;
		}
		if (needle.length() > haystack.length())
		{
			return -1;
		}
		if (haystack.length() != needle.length())
		{
			for (int i = 0; i < haystack.length(); i++)
			{
				if (haystack.substr(i, needle.length()) == needle)
				{
					return i;
				}
			}
		}
		return -1;
	}
};