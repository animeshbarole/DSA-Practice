class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        
        priority_queue<int> max_heap;
        int ans;
        
        
        if(stones.size()==1)
        {
            return stones[0];
        }
        
        
        for(int i= 0;i<stones.size();i++)
        {
            max_heap.push(stones[i]);
        }
        
        while(max_heap.size()>1)
        {
            int a = max_heap.top();
            max_heap.pop();
            int b = max_heap.top();
            max_heap.pop();
            int diff = abs(a-b);
            
            max_heap.push(diff);
        }
        
        ans = max_heap.top();
        
        
        return ans;
        
    }
};