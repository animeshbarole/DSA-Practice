class Solution {
public:
    
    
    void checkLetterCase(string s,string op,vector<string> &ans)
    {
        if(s.size()==0)
        {
            ans.push_back(op);
            return ;
        }
        
        string op1 = op;
        string op2 = op;
        
        if(isdigit(s[0]))
        {
            op1.push_back(s[0]);
            s.erase(s.begin()+0);
            checkLetterCase(s,op1,ans);
        }
        else 
        {
            op1.push_back(tolower(s[0]));
            op2.push_back(toupper(s[0]));
            s.erase(s.begin()+0);
            checkLetterCase(s,op1,ans);
            checkLetterCase(s,op2,ans);
          
        }
       
        
       
        
        return ;
    }
    
    
    vector<string> letterCasePermutation(string s) {
        
        string op  = "";
        vector<string> ans ;
        checkLetterCase(s,op,ans);
        return ans;
    }
};