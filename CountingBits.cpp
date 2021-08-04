class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result(n+1);
        for(int i=0;i<=n;i++)
            result[i]=i%2?1+result[i>>1]:result[i>>1];
        return result;
    }
};
