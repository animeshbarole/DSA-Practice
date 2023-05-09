/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        
        if(!root)
        {
            return true;
        }
        
        queue<TreeNode *> q;
        q.push(root->left);
        q.push(root->right);
        
        while(!q.empty())
        {
            struct TreeNode *p1 = q.front();
            q.pop();
            struct TreeNode *p2 = q.front();
            q.pop();
            
            if(!p1&&p2)
            {
                return false;
            }
            
            if(p1&&!p2)
            {
                return false;
            }
           
            
            if(p1&&p2)
            {
                if(p1->val!=p2->val)
                {
                    return false;
                }
                
                q.push(p1->left);
                q.push(p2->right);
                q.push(p1->right);
                q.push(p2->left);
            }
            
        }
        
        return true;
    }
};