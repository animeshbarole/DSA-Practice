class Solution {
public:
    void findSubset(vector<int>&nums, vector<vector<int>>&ans, vector<int>&ds, int idx)
    {
        //if idx reaches the end of the given vector
        //store the subset
        if(idx == nums.size())
        {
            ans.push_back(ds);
            return ;
        }
        
        //pick the element of nums vector at idx position then call the function
        //incrementing the index by 1
        ds.push_back(nums[idx]);
        findSubset(nums, ans, ds, idx+1);
        
        //after the call, remove the element inserted for the formation of subsets
        //without that element
        ds.pop_back();
        
        //call the function when we do no pick that element
        findSubset(nums, ans, ds, idx+1);
    }
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        //creating the return type Data Structure
        vector<vector<int>>ans;
        
        //another vector to store the current subset
        vector<int>ds;
        
        //calling the recusive function
        //with idx = 0, that is from the starting index
        findSubset(nums, ans, ds, 0);
        
    
        return ans;
    }
};