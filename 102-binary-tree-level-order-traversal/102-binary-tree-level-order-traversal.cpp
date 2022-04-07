
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
     
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
      return v;
      
   
    }
};