class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int ans = 0;
        while (n != 0)
        {
            if (n % 2 == 1)
                ans++;
            n /= 2;
        }
        return ans;
    }
};






// Second appeoches

class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int ans = 0;
        while (n != 0)
        {
            n = n & (n - 1);
            ans++;
        }
        return ans;
    }
};