 class Solution {
     public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       
        
        vector<int> res;
        bool flag = 0;
        for(int i = 0;i<nums1.size();i++)
        {
            for(int j = 0;j<nums2.size();j++)
            {
                if(nums2[j]==nums1[i])
                {
                    flag =1;
                    j++;
                    while(j<nums2.size())
                    {
                        if(nums2[j]>nums1[i])
                        {
                            res.push_back(nums2[j]);
                            flag =0;
                            break;
                        }
                        j++;
                    }
                     if(flag==0)
                {
                    break;
                }
                else {
                    res.push_back(-1);
                }
             
                }
               
               
            }
            
        }
        
        return res;
    }
};