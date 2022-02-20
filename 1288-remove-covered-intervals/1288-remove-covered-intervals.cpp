class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& v) {
        int n=v.size();
        sort(v.begin(),v.end());
        int res=n;
        
        for(int i=0;i<n-1;i++)
         {
            if(v[i][0]<=v[i+1][0]&&v[i][1]>=v[i+1][1]){res--;v[i+1][0]=v[i][0];v[i+1][1]=v[i][1];}
            else if(v[i+1][0]<=v[i][0]&&v[i+1][1]>=v[i][1]){res--;}
          }
        
        return res;
        }
};