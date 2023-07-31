

class Solution
{
public:
	bool isValid(string s)
	{
		stack<char> data;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '(' || s[i] == '{' || s[i] == '[')
			{
				data.push(s[i]);
			}
			else
			{
				switch (s[i])
				{
				case ')':
					if (data.empty())
					{
						return false;
					}
					if (data.top() == '(')
					{
						data.pop();
					}
					else
					{
						return false;
					}
					break;
				case '}':
					if (data.empty())
					{
						return false;
					}
					if (data.top() == '{')
					{
						data.pop();
					}
					else
					{
						return false;
					}
					break;
				case ']':
					if (data.empty())
					{
						return false;
					}
					if (data.top() == '[')
					{
						data.pop();
					}
					else
					{
						return false;
					}
					break;
				}
			}
		}
		if (data.empty())
		{
			return true;
		}
		return false;
	}
};