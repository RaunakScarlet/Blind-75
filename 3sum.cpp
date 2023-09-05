class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        set<vector<int>> s;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++)
        {
            int first = i;
            int second = i + 1;
            int third = nums.size() - 1;

            while (second < third)
            {
                if (nums[first] + nums[second] + nums[third] == 0)
                {
                    vector<int> v = {nums[first], nums[second], nums[third]};
                    second++;
                    third--;
                    s.insert(v);
                }
                else if (nums[first] + nums[second] + nums[third] > 0)
                {
                    third--;
                }
                else
                {
                    second++;
                }
            }
        }

        vector<vector<int>> ans;
        for (auto x : s)
        {
            ans.push_back(x);
        }

        return ans;
    }
};