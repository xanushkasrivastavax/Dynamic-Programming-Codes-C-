class Solution {
public:
void cal(vector<int>& candidates, vector<vector<int>>& dp, vector<int>& m, int target, int p)
{
if(target == 0)
{
dp.push_back(m);
return;
}
if(target<0)
{
return;
}
for(int i=p;i<candidates.size();i++)
{
m.push_back(candidates[i]);
    int rem=target-candidates[i];
cal(candidates,dp,m,rem,i);
m.pop_back();
}
return;
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

    vector<vector<int>> dp;
    vector<int> m;
    cal(candidates,dp,m,target,0);
    return dp;
    
}
};
