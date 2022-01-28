class Solution {
public:
    bool checkValid(vector<vector<int>>& m) {
        
        for(int i=0;i<m.size();i++)
        {
            map<int,int>mp,mp1;
            for(int j=0;j<m[0].size();j++)
            {
                mp[m[j][i]]++;
                mp1[m[i][j]]++;
                if(mp1[m[i][j]]>1||mp[m[j][i]]>1){return false;}
            }
        }
        return true;
    }
};