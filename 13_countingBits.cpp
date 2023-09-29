// first approches

class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> ans(n + 1, 0);
        for (int i = 0; i <= n; i++)
        {

            if (i % 2 == 0)
            {
                ans[i] = ans[i / 2];
            }
            else
            {
                ans[i] = ans[i / 2] + 1;
            }
        }
        return ans;
    }
};



//second approches

class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> ans;
        for (int i = 0; i <= n; i++)
        {
            int num = i;
            int count = 0;
            while (num)
            {
                count += num % 2;
                num = num / 2;
            }
            ans.push_back(count);
        }
        return ans;
    }
};