class Solution {
public:
    int maxDepth(string s) {
        
        int maxi = 0;
        
        int res =0;
        
        for(char c :s)
        {
            if(c=='(')
            {
                maxi++;
                res = max(maxi,res);
            }
            
            if(c==')')
            {
                maxi--;
            }
        }
        
        return res;
    }
};