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
    int res=0;
 void solve(TreeNode*root,int lb,int rb)
 {
     if(root==NULL){return;}
     
     if(root->val<lb){solve(root->right,lb,rb);return;}
     else if(root->val>rb){solve(root->left,lb,rb);return;}
     else if(root->val>=lb&&root->val<=rb){
         res+=root->val;
         solve(root->left,lb,rb);
         solve(root->right,lb,rb);
         return;
     }
     
     
 }
    int rangeSumBST(TreeNode* root, int low, int high) {
        res=0;
     solve(root,low,high);
      return res;
    }
};