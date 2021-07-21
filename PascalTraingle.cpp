class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if(numRows==1)
        {
            ans.push_back({1});
        }
        else if(numRows>1)
        {
            ans.push_back({1});
            ans.push_back({1,1});
        }
        for(int i=2;i<numRows;i++)
        {
            vector<int> Prow={1};
            int j=1;
            while(j<i)
            {
                Prow.push_back(ans[i-1][j]+ans[i-1][j-1]);
                j++;
            }
             Prow.push_back(1);
             ans.push_back(Prow);
        }
       
        return ans;
    }
};
