class Solution {
public:
    bool solver(int p,int maxi,int t,int vis,int dp[])
    {
        if(t<=0&&p)
            return false;
        if(t<=0&&!p)
            return true;
        if(vis==0)
            return false;
        if(dp[vis]!=-1)
            return dp[vis];
        if(p)
        { 
            bool ans=false;
           for(int i=0;i<maxi;i++)
           {
               if(vis&(1<<i))
                  ans=ans|solver(1-p,maxi,t-i-1,vis^(1<<i),dp);
               if(ans==true)
                return dp[vis]=ans;
           }
            return dp[vis]=ans;
        }
        else
        {
             bool ans=true;
           for(int i=0;i<maxi;i++)
           {
               if(vis&(1<<i))
                  ans=ans&solver(1-p,maxi,t-i-1,vis^(1<<i),dp);
               if(ans==false)
                   return dp[vis]=ans;
           }
            return dp[vis]=ans;
        }
    }
    bool canIWin(int maxi, int t) {
        int vis=pow(2,maxi)-1;
        int dp[vis+1];
        memset(dp,-1,sizeof(dp));
        if(t==0)
            return true;
         return solver(1,maxi,t,vis,dp);
    }
};class Solution {
public:
    bool solver(int p,int maxi,int t,int vis,int dp[])
    {
        if(t<=0&&p)
            return false;
        if(t<=0&&!p)
            return true;
        if(vis==0)
            return false;
        if(dp[vis]!=-1)
            return dp[vis];
        if(p)
        { 
            bool ans=false;
           for(int i=0;i<maxi;i++)
           {
               if(vis&(1<<i))
                  ans=ans|solver(1-p,maxi,t-i-1,vis^(1<<i),dp);
               if(ans==true)
                return dp[vis]=ans;
           }
            return dp[vis]=ans;
        }
        else
        {
             bool ans=true;
           for(int i=0;i<maxi;i++)
           {
               if(vis&(1<<i))
                  ans=ans&solver(1-p,maxi,t-i-1,vis^(1<<i),dp);
               if(ans==false)
                   return dp[vis]=ans;
           }
            return dp[vis]=ans;
        }
    }
    bool canIWin(int maxi, int t) {
        int vis=pow(2,maxi)-1;
        int dp[vis+1];
        memset(dp,-1,sizeof(dp));
        if(t==0)
            return true;
         return solver(1,maxi,t,vis,dp);
    }
};
