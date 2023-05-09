/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        
        if(!root) return {} ;
        
        
        vector<vector<int>> ans;
        queue<Node *> q;
        q.push(root);
        
        while(!q.empty())
        {
            int s = q.size();
            vector<int> value;
            for(int i = 0;i<s;i++)
            {
                Node * temp = q.front();
                q.pop();
                value.push_back(temp->val);
                
                for(auto n  : temp->children)
                {
                    q.push(n);
                }
                
            }
            ans.push_back(value);
        }
        
        
        return ans;
        
    }
};