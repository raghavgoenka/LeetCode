class Solution {
public:
    bool checkValid(vector<vector<int>>& m) {
        int n=m.size(); 
        for(int i=0;i<n;i++)
        {
            int mp[101]={0},mp1[101]={0};
            for(int j=0;j<n;j++)
            {
                mp[m[j][i]]++;
                mp1[m[i][j]]++;
                if(mp1[m[i][j]]>1||mp[m[j][i]]>1){return false;}
            }
        }
        return true;
    }
};