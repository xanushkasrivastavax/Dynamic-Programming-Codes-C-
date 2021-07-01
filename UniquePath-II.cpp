class Solution {
public:
int uniquePathsWithObstacles(vector<vector>& obstacleGrid) {
int r=obstacleGrid.size();
int c=obstacleGrid[0].size();
int dp[r][c];

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            dp[i][j]=0;
        }
    }
  for(int i=0;i<r;i++)
  {
      if(obstacleGrid[i][0]==1)
          break;
      else
          dp[i][0]=1;
  }
  for(int i=0;i<c;i++)
  {
      if(obstacleGrid[0][i]==1)
          break;
      else
          dp[0][i]=1;
  }
for(int i=1;i<r;i++)
{
    for(int j=1;j<c;j++)
    {
        if(obstacleGrid[i][j]==0)
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
    }
}
    return dp[r-1][c-1];
    
    
}
};
