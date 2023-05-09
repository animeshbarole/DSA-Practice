class Solution {
public:
    
    
    void function(int index,vector<int> &a,int target,vector<int> &v,vector<vector<int>> &ans)
    {
        
        if(index==a.size())
        {
        
         if(target==0)
         {
             ans.push_back(v);
            
         }
             return;
        }   
        
        
        if(a[index]<=target)
        {
            v.push_back(a[index]);
            function(index,a,target-a[index],v,ans);
            v.pop_back();
          
        }
    function(index+1,a,target,v,ans);
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         
         vector<vector<int>> ans;
         vector<int> v;
         
        function(0,candidates,target,v,ans);
        
        return ans;
    }
};