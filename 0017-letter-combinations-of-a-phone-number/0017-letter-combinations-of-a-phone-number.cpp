class Solution {
public:
    
    
    void solve(int indx,string digits,string mapping[],string op,vector<string> &ans)
    {
        if(indx==digits.length())
        {
            ans.push_back(op);
            return;
        }
        
        int number = digits[indx] - '0';
        string value = mapping[number];
        
        for(int i = 0;i<value.length();i++)
        {
            op.push_back(value[i]);
            solve(indx+1,digits,mapping,op,ans);
            op.pop_back();
        }
        return ;
    }
    
    
    
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        
        if(digits.length()==0)
        {
            return ans;
        }
        string op;
        string mapping[10] = {" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(0,digits,mapping,op,ans);
        return ans;
    }
};