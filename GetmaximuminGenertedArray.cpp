class Solution {
public:
    int getMaximumGenerated(int n) {
        int dp[n+1];
        if(n==0)
        return 0;
        if(n<=2)
          return 1;
        int m=0;
        dp[0]=0;
        dp[1]=dp[2]=1;
     for(int i=3;i<=n;i++)
     {
         if(i%2==0)
         {
         dp[i]=dp[i/2];
         }
         else
         {
             dp[i]=dp[i/2]+dp[i/2+1];
         }
         m=max(dp[i],m);
     }
        return m;
    }
};
