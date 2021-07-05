class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size()-1;
        if(n==0 )
            return 0;
        if(n<=1)
            return 1;
        int cur=0; 
        int m=0;
        int jump=0;
        for(int i=0;i<n;i++)
        {
            m=max(m,i+nums[i]);
        if(i==cur)
        {
            jump++;
            cur=m;
        }
        }
    return jump;
    }
};
