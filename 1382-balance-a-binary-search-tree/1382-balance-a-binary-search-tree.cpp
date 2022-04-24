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
    vector<int>in;
    void solve(TreeNode*root)
{
    if(root==NULL){return;}
    solve(root->left);
    in.push_back(root->val);
    solve(root->right);
}
TreeNode* buildTree(int l,int r)
    {   
        
        if(l>r){return NULL;}
        int mid=l+(r-l)/2;
        TreeNode *root=new TreeNode(in[mid]);
        root->left= buildTree(l,mid-1);
        root->right= buildTree(mid+1,r);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        
	    solve(root);
       return buildTree(0,in.size()-1);
    }
};