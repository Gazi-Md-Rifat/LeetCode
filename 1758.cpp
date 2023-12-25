class Solution
{
public:
    int opp(string s, char c)
    {
        int count = 0;
        if (s[0] != c)
        {
            s[0] = c;
            count = 1;
        }

        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == c)
            {
                if (s[i] == '1')
                {
                    s[i] = '0';
                }
                else
                {
                    s[i] = '1';
                }
                count++;
            }
            c = s[i];
        }
        return count;
    }

    int minOperations(string s)
    {
        int count1 = opp(s, '0');
        int count2 = opp(s, '1');

        return min(count1, count2);
    }
};