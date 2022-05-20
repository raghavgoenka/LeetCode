class Solution {
public:
    vector<vector<int>> dp;
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int ans=0;
        int m=matrix.size();
        int n=matrix[0].size();
        dp.resize(m, vector<int> (n,0));
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                ans=max(ans, maxPath(matrix, i, j));
            }
        }
     return ans;
    }
    
    int maxPath(vector<vector<int>>& matrix, int a, int b) {
        int m=matrix.size();
        int n=matrix[0].size();
        if(dp[a][b]) return dp[a][b];
        dp[a][b]=1;
        vector<int> dir {-1,0,1,0,-1};
        for(int i=0; i<4; i++) {
            int x=a+dir[i];
            int y=b+dir[i+1];
            if(x>=0 && y>=0 && x<m && y<n && matrix[x][y]>matrix[a][b])
                dp[a][b]=max(dp[a][b], 1+maxPath(matrix, x, y));
        }
     return dp[a][b];
    }
};