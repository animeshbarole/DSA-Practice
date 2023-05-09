class Solution {
public:
    int fillCups(vector<int>& amount) {
         
        priority_queue<int> max_heap;
        
         max_heap.push(amount[0]);
         max_heap.push(amount[1]);
         max_heap.push(amount[2]);
         int ans = 0;
        
        while(max_heap.top()!=0)
        {
            int p = max_heap.top();
            max_heap.pop();
            int q = max_heap.top();
            max_heap.pop();
            p--;
            q--;
            max_heap.push(p);
            max_heap.push(q);
            ans++;
        }
      return ans;
    }    
};