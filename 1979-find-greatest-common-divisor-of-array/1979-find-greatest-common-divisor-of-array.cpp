class Solution {
public:
    
    
    int gcd(int l,int s)
    {
        if(s==0)
        {
            return l;
        }
      else  
        return gcd(s,l%s);
    }
    
    int findGCD(vector<int>& nums) {
        
        int smaller = INT_MAX;
        int larger = INT_MIN;
        
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]>larger)
            {
                larger = nums[i];
            }
        }
        
        for(int j = 0;j<nums.size();j++)
        {
            if(nums[j]<smaller)
            {
                smaller = nums[j];
            }
        }
        
        int ans = gcd(smaller, larger);
   
        return ans;
    }
};