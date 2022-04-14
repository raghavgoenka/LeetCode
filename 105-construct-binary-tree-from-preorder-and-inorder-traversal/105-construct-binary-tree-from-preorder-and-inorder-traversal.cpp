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
    int index=0;
    TreeNode* solveTree(vector<int>in,vector<int>pre,int l,int r)
    {
        if(l>r){return NULL;}
        TreeNode* node=new TreeNode(pre[index++]);
        if(l==r){return node;} // when left n right is not present;
        int mid=mp[node->val];
        node->left=solveTree(in,pre,l,mid-1);
        node->right=solveTree(in,pre,mid+1,r);
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++)
        {
            mp[inorder[i]]=i;
        }
       TreeNode* root= solveTree(inorder,preorder,0,inorder.size()-1);
        return root;
    }
};