class Solution {
public:
    
   
   int firstOccurance(vector<int> nums,int key)
    {
        int start =0;
        int end  = nums.size()-1;
        int first = -1;
        
        while(start<=end)
        {
            int mid = start +(end-start)/2;
            if(nums[mid]==key)
            {
                first = mid;
                end = mid-1;
            }
            else if(nums[mid]>key)
            {
                end = mid-1;
            }
            else 
            {
                start = mid+1;
            }
        }
      
        return first;;
    }
    
    int LastOccurance(vector<int> nums,int key)
    {
        int start =0;
        int end  = nums.size()-1;
        int last = -1;
        
        while(start<=end)
        {
            int mid = start +(end-start)/2;
            if(nums[mid]==key)
            {
                last = mid;
                start = mid+1;
            }
            else if(nums[mid]>key)
            {
                end = mid-1;
            }
            else 
            {
                start = mid+1;
            }
        }
          return last;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
         vector<int> ans;
       int a =  firstOccurance(nums, target);
       int b = LastOccurance( nums, target);
        
        ans.push_back(a);
        ans.push_back(b);
            
       return ans; 
    }
};