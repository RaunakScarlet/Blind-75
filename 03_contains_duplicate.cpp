class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        // 1 Approch(nlogn+n)

        // sort(nums.begin(),nums.end());
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i-1]==nums[i]) return true;
        // }
        // return false;

        // 2 approch(n+n)

        
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            if (mp.find(nums[i]) != mp.end())
            {
                return true;
            }
            else
            {
                mp[nums[i]];
            }
        }
        return false;
    }
};