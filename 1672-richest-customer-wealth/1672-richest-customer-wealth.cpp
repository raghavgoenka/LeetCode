class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        
        int res=0;
        for(int i=0;i<a.size();i++)
        {
            int sum=0;
            for(int j=0;j<a[0].size();j++){sum+=a[i][j];}
            res=max(sum,res);
        }
        return res;
        
    }
};