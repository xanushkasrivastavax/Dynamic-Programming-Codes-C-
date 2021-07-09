class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int r = triangle.size();
        if(r==1) return triangle[0][0];
        int i = 1;
        while(i < r){
            int c = triangle[i].size();
            int j = 0;
            while(j < c){
                if(j == 0){
                    triangle[i][j] = triangle[i][j] + triangle[i-1][j];
                }
                else if(j == c-1){
                    triangle[i][j] = triangle[i][j] + triangle[i-1][j-1];
                }
                else{
                    triangle[i][j] = triangle[i][j] + min(triangle[i-1][j], triangle[i-1][j-1]);
                }
                j++;
            }
            i++;
        }
        int minPath = triangle[r-1][0];
        for(int i=1; i<triangle[r-1].size(); i++){
            if(triangle[r-1][i] < minPath) minPath = triangle[r-1][i];
        }
        return minPath;
    }
};
