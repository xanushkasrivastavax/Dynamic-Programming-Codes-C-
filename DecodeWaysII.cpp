#define mod 1000000007
class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        if(s.front()=='0')
            return 0;
       vector<long long> dp(n+1);
        long long cnt=1;
        if(s[0]=='*')cnt*=9;
        dp[0]=1;
        dp[1]=cnt;
        for(int i=1;i<n;i++)
       {
            if(s[i]=='0')
            {
                if(s[i-1]=='1'||s[i-1]=='2')
                   cnt=dp[i-1];
                else if(s[i-1]=='*')
                 cnt=(dp[i-1]*2)%mod;
                else return 0;
            }
           else if(s[i]=='*')
           {
               cnt=(cnt*9)%mod;
               if(s[i-1]=='1')
                   cnt+=(dp[i-1]*9)%mod;
               else if(s[i-1]=='2')
                   cnt+=(dp[i-1]*6)%mod;
               else if(s[i-1]=='*')
                   cnt+=(dp[i-1]*15)%mod;
           }
           else{
                if(s[i-1]=='1')
                   cnt+=dp[i-1]%mod;
               else if(s[i-1]=='2'&&s[i]<'7')
                   cnt+=dp[i-1]%mod;
               else if(s[i-1]=='*')
               {
                   if(s[i]<'7'&&s[i]>'0')
                       cnt+=2*dp[i-1]%mod;
                   else if(s[i]>'6')
                       cnt+=dp[i-1]%mod;
               }
           }
            cnt%=mod;
            dp[i+1]=cnt;
       }
       return dp.back();
    }
};
