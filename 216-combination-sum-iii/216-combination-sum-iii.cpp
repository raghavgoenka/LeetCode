class Solution {
public:
    vector<vector<int>>res;
    
    void solve(int k,int n,vector<int>&t,int sum,int p,vector<int>&v)
        
    {
        
        if(sum==n&&t.size()==k){res.push_back(t);return;}
        else if(sum>n){return ;}
        for(int i=p;i<=9;i++)
        {   if(v[i]==0){
              sum+=i;
            v[i]=1;
              t.push_back(i);
              solve(k,n,t,sum,i,v);
              t.pop_back();
             sum-=i;
            v[i]=0;
        }
            
        }
        return ;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>t,vis(10,0);
        solve(k,n,t,0,1,vis);
        return res;
    }
};