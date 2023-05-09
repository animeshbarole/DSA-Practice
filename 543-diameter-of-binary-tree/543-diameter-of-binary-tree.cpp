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
    
    int rec(TreeNode * r,int &d)
    {
        if(r==NULL)
        {
            return 0;
        }
        
        int lf = rec(r->left,d);
        int rg = rec(r->right,d);
        d = max(d,lf+rg);
        
        return max(lf,rg)+1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        int d = 0;
        rec(root,d);
        
        return d;
    }
};