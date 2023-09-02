class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        // brute force solution
        //        int n=nums.size();
        //        int ans=INT_MIN;

        //        for(int i=0;i<n;i++){

        //            for(int j=i;j<n;j++){

        //                int sum=0;
        //                for(int k=i;k<=j;++){
        //                    sum+=nums[k];
        //                    ans=max(ans,sum);

        //                }
        //            }

        //        }

        //    return ans;

        // better solution

        //  int n=nums.size();
        //        int ans=INT_MIN;

        //        for(int i=0;i<n;i++){
        //          int sum=0;
        //            for(int j=i;j<n;j++){
        //                sum+=nums[j];

        //                ans=max(ans,sum);
        //            }
        //        }
        //               return ans;

        // kadane's solution

        int n = nums.size();
        int ans = INT_MIN;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];

            if (sum < 0)
            {
                sum = 0;
            }
            if (ans < sum)
            {
                ans = sum;
            }
        }
        return ans;
    }
};