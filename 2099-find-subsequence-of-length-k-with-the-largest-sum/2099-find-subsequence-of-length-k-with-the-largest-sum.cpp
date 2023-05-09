
typedef pair<int,int> p;
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        
        priority_queue<p,vector<p>,greater<p>> minheap;
        
        for(int i = 0;i<nums.size();i++)
        {
            minheap.push({nums[i],i});
            
            if(minheap.size()>k)
            {
              minheap.pop();
            }
        }
        
        priority_queue<p,vector<p>,greater<p>> aux;
        
        while(!minheap.empty())
        {
           aux.push({minheap.top().second,minheap.top().first});
           minheap.pop();
        }
        
        vector<int> ans;
        
        while(!aux.empty())
        {
          ans.push_back(aux.top().second);
          aux.pop();
        }
        return ans;
    }
};