class Solution {
public:
    bool rotateString(string s, string goal) {
    
      
        if(s.length()!=goal.length())
        {
            return false;
        }
        
        s=s+s;
        
        int check  = s.find(goal);
        
        if(check>goal.size()) return false;
        
        return true;
         
    }
    
};