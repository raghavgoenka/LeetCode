class Solution {
public:
    int in[100001]={0},low[100001]={0},vis[100001]={0};
    vector<vector<int>>v;
   
	int timer=0,a,b,flag=0;
	void dfs(vector<int>adj[],int node,int par)
	
	{
	 vis[node]=1;
	 in[node]=timer;
	 low[node]=timer;
	 timer++;
	 for(auto i:adj[node])
	 {
	     if(i==par){continue;}
	     if(vis[i]==1)
	     { //back edge
	         low[node]=min(low[node],in[i]);
	     }
	     else{
             //forward edge
	         dfs(adj,i,node);
	         if(low[i]>in[node])
	         {
	             
                 v.push_back({i,node});
                 
	         }
	         low[node]=min(low[node],low[i]);
	     }
	 }
	 
	}
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int>adj[n];
        
        for(int i=0;i<connections.size();i++)
        {
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
    for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(adj,i,-1);
            }
        }
        return v;
    }
};