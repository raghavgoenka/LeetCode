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
    
       
    vector<int> inorderTraversal(TreeNode* root) {
       vector<int>v;
        TreeNode*cur=root,*prev=NULL;
        while(cur!=NULL)
        {
            if(cur->left==NULL){v.push_back(cur->val);
             cur=cur->right;                   
            }
            else if(cur->left!=NULL)
            {
                prev=cur->left;
                while(prev->right!=NULL&&prev->right!=cur)
                {
                    prev=prev->right;
                }
                if(prev->right==NULL)
                {
                     prev->right=cur;
                    cur=cur->left;
                }
                else{
                    prev->right=NULL;
                    v.push_back(cur->val);
                    cur=cur->right;
                }
               
              
            }
              
            
        }
       return v;
    }
};