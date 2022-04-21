/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* res=NULL;
    void solve(TreeNode*root,TreeNode*p,TreeNode*q)
    {  
        if(root==NULL){return;}
        else if(root->val<p->val){ solve(root->right,p,q);}
        else if(root->val>q->val){ solve(root->left,p,q);}
        else{ res=root;return;}
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        p->val<q->val?solve(root,p,q):solve(root,q,p);
        return res;
    }
};