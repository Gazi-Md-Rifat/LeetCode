class Solution
{
public:
    vector<string> findWords(vector<string> &words)
    {
        vector<string> ans;
        for (int i = 0; i < words.size(); i++)
        {
            int line = 0;
            int count = 0;
            for (int j = 0; j < words[i].size(); j++)
            {
                char ch = words[i][j];
                if ((line == 0 || line == 1) && (ch == 'q' || ch == 'w' || ch == 'e' || ch == 'r' || ch == 't' || ch == 'y' || ch == 'u' || ch == 'i' || ch == 'o' || ch == 'p' || ch == 'Q' || ch == 'W' || ch == 'E' || ch == 'R' || ch == 'T' || ch == 'Y' || ch == 'U' || ch == 'I' || ch == 'O' || ch == 'P'))
                {
                    line = 1;
                    count++;
                }
                else if ((line == 0 || line == 2) && (ch == 'a' || ch == 's' || ch == 'd' || ch == 'f' || ch == 'g' || ch == 'h' || ch == 'j' || ch == 'k' || ch == 'l' || ch == 'A' || ch == 'S' || ch == 'D' || ch == 'F' || ch == 'G' || ch == 'H' || ch == 'J' || ch == 'K' || ch == 'L'))
                {
                    line = 2;
                    count++;
                }
                else if ((line == 0 || line == 3) && (ch == 'z' || ch == 'x' || ch == 'c' || ch == 'v' || ch == 'b' || ch == 'n' || ch == 'm' || ch == 'Z' || ch == 'X' || ch == 'C' || ch == 'V' || ch == 'B' || ch == 'N' || ch == 'M'))
                {
                    line = 3;
                    count++;
                }
                else {
                    break;
                }
            }
            if (count == words[i].size()){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};