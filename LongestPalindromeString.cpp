class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length(),start=0,length=0,dp[n][n];
      memset(dp,false,sizeof(dp));
      
        
        for(int i=0;i<n;i++)
        {
          dp[i][i]=true;
            start=i;
            length=1;
        }
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1]=true;
                start=i;
                length=2;
            }
            
        }
        for(int k=3;k<=n;k++)
        {
            for(int i=0;i<=n-k;i++)
            {
                int j=i+k-1;
                if(s[i]==s[j] && dp[i+1][j-1]==true)
                {
                    dp[i][j]=true;
                    start=i;
                    length=max(length,k);
                }
                    
            }
        }
        return s.substr(start,length);
        
    }
};

