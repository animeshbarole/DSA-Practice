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
    
    
    int isBalance(TreeNode *root)
    {
        if(root==NULL)
             return 0;
        int lf = isBalance(root->left);
        if(lf==-1) return -1;
        int rg = isBalance(root->right);
        if(rg==-1) return -1;
        
        if(abs(lf-rg)>1) return -1;
        
        return max(lf,rg)+1;
    }
    
    
    bool isBalanced(TreeNode* root) {
        
          return isBalance(root)!=-1;
    }
};