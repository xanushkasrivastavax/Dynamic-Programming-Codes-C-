class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0){
            return {1};
        }
        if(rowIndex==1)
        {
            return {1,1};
        }
        vector<int> prev={1,1};
        for(int i=2;i<=rowIndex;i++)
        {
            vector<int> ans={1};
            int j=1;
            while(j<i)
            {
                ans.push_back(prev[j]+prev[j-1]);
                j++;
            }
            ans.push_back(1);
            prev=ans;
        }
        return prev;
    }
};
