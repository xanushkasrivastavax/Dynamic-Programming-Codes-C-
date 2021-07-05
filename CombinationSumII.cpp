class Solution {
public:
void cal(vector<int>& candidates, vector<vector<int>>& dp, vector<int>& m, int target, int p)
{
if(target == 0)
{
dp.push_back(m);
return;
}
if(p>candidates.size() || target<0)
{
return;
}
for(int i=p;i<candidates.size();i++)
{
    if(i>p && candidates[i]==candidates[i-1])
    {
        continue;
    }
m.push_back(candidates[i]);
    int rem=target-candidates[i];
cal(candidates,dp,m,rem,i+1);
m.pop_back();
}
return;
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

    vector<vector<int>> dp;
    vector<int> m;
    sort(candidates.begin(),candidates.end());
    cal(candidates,dp,m,target,0);
    return dp;
    
}
};
