class Solution {
public:
    int maxProfit(vector<int>& p) {
        int sum = 0;
        for(int i =1 ;i<p.size();i++){
            if(p[i-1] < p[i])
                sum += p[i] - p[i-1];
        }
        return sum;
    }
};
