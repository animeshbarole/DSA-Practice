class Solution {
public:
    string removeOuterParentheses(string s) {
        
        int open = 0;
        string ans ;
        for(char c :s)
        {
            if(c=='('&&open++>0)
            {
                ans =ans +c;
            }
            
            if(c==')'&&open-->1)
            {
                ans =ans+c;
            }
        }
        return ans;
    }
};