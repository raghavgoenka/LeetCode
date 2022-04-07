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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
         vector<vector<int>>v;
            vector<int>t;
        if(root==NULL){return v;}
      queue<TreeNode*>st;
      st.push(root);
      while(!st.empty())
      {
          int s=st.size();
          for(int i=0;i<s;i++)
          {
              TreeNode* temp=st.front();
              st.pop();
              t.push_back(temp->val);
             if(temp->left){st.push(temp->left);}
              if(temp->right){st.push(temp->right);}
            
             
          }
          v.push_back(t);
          t.clear();
      }
        reverse(v.begin(),v.end());
      return v;
    }
};