class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        
        priority_queue<int,vector<int>,greater<int>> min_heap;
        int product;
        
        int n = nums.size();
        
        for(int i = 0;i<nums.size();i++)
        {
            min_heap.push(nums[i]);
            
            if(min_heap.size()>2)
            {
                min_heap.pop();
            }
        }
        
        while(!min_heap.empty())
        {
            int a = min_heap.top();
            min_heap.pop();
            int b = min_heap.top();
            min_heap.pop();
           product = (a-1)*(b-1);
        }
        
        //product = (a-1)*(b-1);
        
        return product;
        
    }
};