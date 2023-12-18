class Solution
{
public:
    vector<int> leftRightDifference(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> leftSum, rightSum, ans;
        int l = 0, r = 0;

        for (int i = 0; i < n; i++)
        {
            leftSum.push_back(l);
            rightSum.push_back(r);

            l = l + nums[i];
            r = r + nums[n - 1 - i];
        }

        for (int i = 0; i < n; i++)
        {
            ans.push_back(abs(leftSum[i] - rightSum[n - i - 1]));
        }
        return ans;
    }
};