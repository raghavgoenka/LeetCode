class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>v;
        for(int i=0;i<mat.size();i++)
        { int c=0;
            for(int j=0;j<mat[0].size();j++){if(mat[i][j]==1){c++;}}
            v.push_back({c,i});
        }
        sort(v.begin(),v.end());
        
        vector<int>p;
        for(int i=0;i<k;i++){p.push_back(v[i].second);}
        return p;
    }
};