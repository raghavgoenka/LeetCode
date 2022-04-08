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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<TreeNode*,pair<int,int>>> q;
        map<int,map<int,multiset<int>>>mp;
        q.push({root,{0,0}});
        while(!q.empty())
        {
            auto i=q.front();
            q.pop();
            int a=i.second.first,b=i.second.second;
            
            TreeNode* temp=i.first;
            mp[a][b].insert(temp->val);
            if(temp->left)
            {
                q.push({temp->left,{a-1,b+1}});
            }
            if(temp->right)
            {
                q.push({temp->right,{a+1,b+1}});
            }
        }
        vector<vector<int>>res;
        for(auto i:mp)
        {
            vector<int>t;
            for(auto j:i.second)
            {
                for(auto k:j.second){t.push_back(k);}
                            
            }
            res.push_back(t);
        }
        return res;
    }
};