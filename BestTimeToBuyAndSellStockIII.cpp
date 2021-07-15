class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int t2Profit = 0, t2Cost = INT_MAX;
        int t1Profit = 0, t1Cost = INT_MAX;

        for(int i=0; i < prices.size(); i++) {
            t1Profit = max(t1Profit, prices[i] - t1Cost);
            t1Cost = min(t1Cost, prices[i]);
            
            t2Cost = min(t2Cost, prices[i] - t1Profit);
            t2Profit = max(t2Profit, prices[i] - t2Cost);
        }
        return t2Profit;
    }
};
