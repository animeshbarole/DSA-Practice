class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end()); //sort the Array [-2,-2,-2,,-1,-1,0,0,1,1,2,2,2]
        vector<vector<int>> res;
        
        for(int i = 0 ;i<nums.size()-2;i++)
        {
            if(i==0 || (i>0 && nums[i]!=nums[i-1]))
            {
                int lo = i+1;
                int hi = nums.size()-1;
                int sum = 0-nums[i];
                
                while(lo<hi)
                {
                    if(nums[lo]+nums[hi]==sum)
                    
                    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[lo]);
                        temp.push_back(nums[hi]);
                        res.push_back(temp);                        
                     
                    
                    
                    while(lo<hi && nums[lo]==nums[lo+1]) lo++;
                    while(lo<hi && nums[hi]==nums[hi-1]) hi--;
                    
                    lo++;
                    hi--;
                  }
                else if(nums[lo]+nums[hi] < sum)
                    lo++;
                else hi--;
                
               }      
            }
        }
        return res;
    }
};