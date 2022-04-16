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
    int sum=0;
    void grandParent(TreeNode*root,int parent,int gp)
    {
         if(root==NULL){return;}
         if(!(gp&1)){sum+=root->val;}
        grandParent(root->left,root->val,parent);
        grandParent(root->right,root->val,parent);
    }
    int sumEvenGrandparent(TreeNode* root) {
       grandParent(root,1,1);
        return sum;
    }
};