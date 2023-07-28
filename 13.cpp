class Solution
{
public:
	int romanToInt(string s)
	{
		int I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000;
		int last = 0; // initial from 0.. because i gonna compare with roman sign value ...its biggar or lower for add or substract...
		int ans = 0;
		for (int i = s.length() - 1; i >= 0; i--)
		{
			switch (s[i])
			{      // ----------------- Remember Roman Number always be Decreasing Order .. Ex - XVI = 16; if not maintain order then defferent order data substract from total sum.. Ex - XIV = 14; Here I not miantain sequence thats why we substract from her next daya or value ( V )...
			// -------------Thins is main twist....
			case 'I':
				if (I >= last) // base case
				{
					ans += I;
				}
				else 
				{
					ans -= I;
				}
				last = I;
				break;
			case 'V':
				if (V >= last)
				{
					ans += V;
				}
				else 
				{
					ans -= V;
				}
				last = V;
				break;
			case 'X':
				if (X >= last)
				{
					ans += X;
				}
				else 
				{
					ans -= X;
				}
				last = X;
				break;
			case 'L':
				if (L >= last)
				{
					ans += L;
				}
				else 
				{
					ans -= L;
				}
				last = L;
				break;
			case 'C':
				if (C >= last)
				{
					ans += C;
				}
				else 
				{
					ans -= C;
				}
				last = C;
				break;
			case 'D':
				if (D >= last)
				{
					ans += D;
				}
				else 
				{
					ans -= D;
				}
				last = D;
				break;
			case 'M':
				if (M >= last)
				{
					ans += M;
				}
				else 
				{
					ans -= M;
				}
				last = M;
				break;
			
			default:
				break;
			}
		}
		return ans;
	}
};