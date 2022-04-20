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
    map<int,int>mp;
    int v=0,tar;
    void solve(TreeNode*root)
    {
        if(root==NULL){return;}
        
        solve(root->left);
        if(mp[(tar-(root->val))]>0){v=1;return;}
        mp[root->val]++;
        solve(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        mp[0]=0;
        tar=k;
        solve(root);
        return v;
    }
};