class Solution {
public:
    vector<int> findOrder(int V, vector<vector<int>>& pre) {
          vector<int>indegree(V,0),res,v;
        if(V==1){res.push_back(0);return res;}
        else if(V==2&&pre.size()==1){res.push_back(pre[0][1]);res.push_back(pre[0][0]);return res;}
        
       
	    queue<int>q;
        vector<int>adj[V];
        for(int i=0;i<pre.size()&&pre.size()>0;i++)
        {
            adj[pre[i][0]].push_back(pre[i][1]);
        }
	    
	    
	     for(int i=0;i<V;i++)
	    {
	        for(auto it:adj[i])
	        {
	            indegree[it]++;
	        }
	    }
	    for(int i=0;i<V;i++)
	    {
	        if(indegree[i]==0){q.push(i);}
	    }
       
	    while(!q.empty())
	    {
	        int s=q.front();
	        q.pop();
	        res.push_back(s);
	        for(auto it:adj[s])
	        {
	            indegree[it]--;
	            if(indegree[it]==0){q.push(it);}
	        }
	    }
        reverse(res.begin(),res.end());
	    return res.size()==V?res:v;
	
    }
};