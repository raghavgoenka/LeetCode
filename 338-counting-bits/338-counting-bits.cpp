class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;
        for(int i=0;i<=n;i++)
        {
            int ans=0,p=i;
            while(p)
        {
            ans+=p&1;
            p>>=1;
            
        }
            v.push_back(ans);
        }
        
        return v;
    }
};