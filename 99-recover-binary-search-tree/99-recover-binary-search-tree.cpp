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
    vector<TreeNode*>v;
    void solve(TreeNode*root)
    {
        if(root==NULL){return;}
        solve(root->left);
        v.push_back(root);
        solve(root->right);
    }
    void recoverTree(TreeNode* root) {
        solve(root);
       
        for(int i=0;i<v.size()-1;i++)
        {
            for(int j=i+1;j<v.size();j++)
            {  
            if(v[i]->val>v[j]->val){swap(v[i]->val,v[j]->val);}
           }
        }
        
        
    }
};