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
    int minDepth(TreeNode* node) {
          if(node==NULL){return 0;}
        
        int a=minDepth(node->left);
        int b=minDepth(node->right);
         if(a == 0)
        {
            return b + 1;
        }
        if(b == 0)
        {
            return a + 1;
        }
        return min(a,b)+1;
    }
};