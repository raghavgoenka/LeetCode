class Solution {
public:
    int c=0;
    void dfs(int node,vector<int>adj[],vector<int>&vis)
    {
        vis[node]=1;
        c++;
        for(auto it:adj[node])
        {
            if(!vis[it]){
                dfs(it,adj,vis);
            }
        }
        return ;
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<rooms[i].size();j++)
            {
                adj[i].push_back(rooms[i][j]);
            }
        }
        //  for(int i=0;i<n;i++)
        // {
            vector<int>vis(n,0);
            dfs(0,adj,vis);
             // cout<<i<<" "c<<endl;
            if(c==n){return true;}
            c=0;
        
        return false;
        
    }
};