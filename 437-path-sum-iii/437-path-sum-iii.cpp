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
    int p,res=0;
     void path(TreeNode* node,vector<long int> v)
    {
        if(node==NULL){return ;}
        v.push_back(node->val);
        path(node->left,v);
        path(node->right,v);
        int sum=0;
        for(int k=v.size()-1;k>=0;k--)
        {
            sum+=v[k];
            if(sum==p){res++;}
        }
        return ;
    }
   
       
    
    int pathSum(TreeNode* root, int targetSum) {
         vector<long int >v;
        p=targetSum;
        path(root,v);
        return res;
    }
};