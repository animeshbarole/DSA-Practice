class Solution {
    
  
    int countValue(vector<int>&v)
    {
        int start = 0;
        int end = v.size()-1;
        
        while(start<=end)
        {
            int mid  = start+(end-start)/2;
            
            if(v[mid]==0)
            {
                end = mid-1;
            }
            else 
            {
                start = mid+1;
            }
        }
        return start;
    }
        
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        priority_queue<pair<int,int>> max_heap;
        vector<int> ans;
        for(int i = 0;i<mat.size();i++)
        {
            max_heap.push({countValue(mat[i]),i});
            if(max_heap.size()>k)
             {
                  max_heap.pop();
             }
                          
        }
                          
        while(!max_heap.empty())
                          {
                              ans.push_back(max_heap.top().second);
                              max_heap.pop();
                          }
        reverse(ans.begin(),ans.end());
                          
        return ans;
    }
};