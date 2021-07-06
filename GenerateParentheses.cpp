class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> output_arr;
        backtrack(output_arr,"",0,0,n);
        return output_arr;
        
    }
    void backtrack(vector<string>& output_arr,string current,int open,int close,int max)
    {
        if(current.length()==max*2)
        {
            output_arr.push_back(current);
            return;
        }
        if(open<max)
            backtrack(output_arr,current+"(",open+1,close,max);
        if(close<open)
            backtrack(output_arr,current+")",open,close+1,max);
        
        
    }
};
