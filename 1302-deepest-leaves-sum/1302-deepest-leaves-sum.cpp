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
    int sum=0, mx=INT_MIN;
    void solve(TreeNode*root,int level)
    {
        if(root==NULL){return;}
        if(root->left==NULL&&root->right==NULL){
            if(level>mx){mx=level;sum=root->val;}
            else if(level==mx){sum+=root->val;}
            return;}
        solve(root->left,level+1);
        solve(root->right,level+1);
    }
    int deepestLeavesSum(TreeNode* root) {
        solve(root,0);
        return sum;
    }
};