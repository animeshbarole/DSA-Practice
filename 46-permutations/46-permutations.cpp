class Solution {
private:
    
    void recuPermute(int indx,vector<int> nums,vector<vector<int>> &ans)
    {
       if(indx==nums.size())
       {
           ans.push_back(nums);
           return;
       }
       
      
        
       for(int i = indx;i<nums.size();i++)
       { 
         
           swap(nums[i],nums[indx]);
           recuPermute(indx+1,nums,ans);
           swap(nums[i],nums[indx]);//backtrack
       }
       return ;
    }
    
 public:   
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans; 
        recuPermute(0,nums,ans);
        return ans;
    }
};