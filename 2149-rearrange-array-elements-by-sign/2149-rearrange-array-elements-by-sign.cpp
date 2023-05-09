class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> ans(nums.size(),0);
        int postive = 0;
        int negative =1;
        
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                ans[postive] = nums[i];
                postive+= 2;
            }
            if(nums[i]<0)
            {
                ans[negative]  =nums[i];
                negative+= 2;
            }
        }
        return ans;
    }
};