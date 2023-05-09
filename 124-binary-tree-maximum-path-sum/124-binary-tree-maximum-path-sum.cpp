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
    
    
    int maxSum(TreeNode * root,int &maxi)
    {
        if(!root) return 0;
        
        int left_sum = max(0,maxSum(root->left,maxi));
        int right_sum =max(0,maxSum(root->right,maxi));
        
        maxi  = max(maxi,root->val+left_sum+right_sum);
        
        return root->val+max(left_sum,right_sum);
        
    }
    
    
    int maxPathSum(TreeNode* root) {
        
        int maxi = INT_MIN;
        maxSum(root,maxi);
        return maxi;
    }
};