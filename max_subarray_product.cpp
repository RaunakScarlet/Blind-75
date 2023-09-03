class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {

        int n = nums.size();
        int ans = nums[0];

        // brute force

        // for(int i=0;i<n;i++){

        //     for(int j=i;j<n;j++){
        //         int prod=1;
        //         for(int k=i;k<=j;k++){
        //             prod*=nums[k];
        //             ans=max(ans,prod);
        //         }
        //     }
        // }

        //         for(int i=0;i<n;i++){
        // int prod=1;
        //             for(int j=i;j<n;j++){

        //                     prod*=nums[j];
        //                     ans=max(ans,prod);

        //             }
        //         }
        // return ans;
        int pre = 1, suff = 1;
        for (int i = 0; i < n; i++)
        {
            if (pre == 0)
            {
                pre = 1;
            }
            if (suff == 0)
            {
                suff = 1;
            }
            pre *= nums[i];
            suff *= nums[n - i - 1];
            ans = max(ans, max(pre, suff));
        }

        return ans;
    }
};