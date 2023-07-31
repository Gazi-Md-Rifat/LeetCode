

class Solution
{
public:
	bool isPalindrome(int x)
	{
		long long int result = 0;
		int y = x;
		while (y > 0)
		{
			result = (result * 10) + (y % 10);
			y = y / 10;
		}
		if (result == x)
		{
			return true;
		}
		return false;
	}
};