class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int Area = 0;
        for (int i = 0; i < height.size(); i++)
        {
            for (int j = i + 1; j < height.size(); j++)
            {
                Area = max(Area, (min(height[i], height[j]) * (j - i)));
            }
        }
        return Area;
    }
};