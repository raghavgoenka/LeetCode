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
    int findBottomLeftValue(TreeNode* root) {
        
        if(root==NULL){return -1;}
      
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
          int res,mx=INT_MIN;
        while(!q.empty())
        {
            auto i=q.front();
            q.pop();
            TreeNode* temp=i.first;
            int x=i.second.first;
            int level=i.second.second;
            if(level>mx){mx=level;res=temp->val;}
          
            if(temp->left){q.push({temp->left,{x-1,level+1}});}
            if(temp->right){q.push({temp->right,{x+1,level+1}});}
        }
      
        // for(auto i:mp){if(i.second.second>mx){mx=i.second.second;res=i.second.first;}}
        
        return res;
    }
};