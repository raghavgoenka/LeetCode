class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        
        int vis[100001]={0};
        for(int i=0;i<edges.size();i++)
        {
            vis[edges[i][1]]++;
        }
        
        vector<int>v;
        for(int i=0;i<n;i++){if(vis[i]==0){v.push_back(i);}}
        return v;
    }
};