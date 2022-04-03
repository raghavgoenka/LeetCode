class Solution {
    typedef long long int lli;
    long long  mod=1e9+7;
public:

    int countPaths(int n, vector<vector<int>>& roads) {
        vector<lli>dis(n,LONG_MAX),ways(n,0);
        priority_queue<pair<lli,lli>,vector<pair<lli,lli>>,greater<pair<lli,lli>>> pq;
        dis[0]=0;
        ways[0]=1;
        pq.push({0,0});
        vector<vector<pair<lli,lli>>> adj(n);
        for(auto &e :roads){
            adj[e[0]].push_back({e[1],e[2]});
            adj[e[1]].push_back({e[0],e[2]});
        }
     while(!pq.empty())
     {
         lli node=pq.top().second;
         lli weight_node=pq.top().first;
         pq.pop();
         for(auto &it:adj[node])
         {
             lli v=it.first;
                lli w=it.second;
             if(dis[v]>(weight_node+w))
             {
                 dis[v]=weight_node+w;
                 ways[v]=ways[node];
                 pq.push({dis[v],v});
             }
             else if(dis[v]==(weight_node+w))
            {
                 ways[v]=(ways[v]+ways[node])%mod;
             }
         }
      }
        return ways[n-1];
    }
};