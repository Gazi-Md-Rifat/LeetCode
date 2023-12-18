class Solution
{
public:
    int balancedStringSplit(string s)
    {
        char ch1 = 'L';
        char ch2 = 'R';
        int lcount = 0;
        int rcount = 0;
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ch1)
            {
                lcount++;
            }
            if (s[i] == ch2)
            {
                rcount++;
            }
            if (lcount == rcount)
            {
                count++;
            }
        }
        return count;
    }
};
