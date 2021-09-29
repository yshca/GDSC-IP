class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size(),mx=1;
        int dp[n];
        dp[0]=1;
         for(int i=1;i<n;i++)
         {
             dp[i]=1;
             for(int j=0;j<i;j++)
             {
                 if(nums[i]>nums[j] && dp[j]+1>dp[i])
                 {
                     dp[i]=dp[j]+1;
                 }
             }mx=max(mx,dp[i]);
         }
        return mx;
    }
};