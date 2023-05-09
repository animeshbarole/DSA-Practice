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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
            
         
           
         
           queue<TreeNode *> q;
           q.push(root);
           vector<vector<int>> ans;
           bool left_to_right = true;
        
           if(root==NULL)
           {           
               return ans;
           }
          
           while(!q.empty())
           {
               vector<int> temp;
               int size = q.size();
               
               for(int i = 0;i<size;i++)
               {
                    TreeNode * node = q.front();
                    q.pop();
                    if(node->left) q.push(node->left);
                    if(node->right)q.push(node->right);
                    temp.push_back(node->val);
               }
               if(left_to_right)
               {
                   ans.push_back(temp);
                   left_to_right=false;
               }
               else
               {
                   reverse(temp.begin(),temp.end());
                   ans.push_back(temp);
                   left_to_right = true;
               }
           }
           
         return ans;
    }
};