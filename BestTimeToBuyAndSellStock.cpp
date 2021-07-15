class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min=prices[0];
        int max=0;
        for(int i=0;i<n;i++)
        {
            if(prices[i]<min)
                min=prices[i];
                int profit=prices[i]-min;
            if(profit>max)
                max=profit;
        }
        return max;
    }
};
