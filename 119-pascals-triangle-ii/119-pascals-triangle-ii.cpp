class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector <int> res;
        
        long long  val = 1;
        res.push_back(val);
        
        for(int i = 0;i<rowIndex;i++)
        {
            val = val*(rowIndex-i);
            val = val/ (i+1);
            
            res.push_back(val);
        }
        
        return res;
        
    }
};