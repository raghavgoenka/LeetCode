class Solution {
public:
    
     void dfs(vector<vector<int>>& M, int n, int m, int i, int j,int &count){
        M[i][j] = -1;
        
        vector<int>row = {i + 1, i - 1, i, i};
        vector<int>col = {j, j, j + 1, j - 1};
        for(int k = 0; k < 4; k++){
            if(row[k] < n && col[k] < m && row[k] >= 0 && col[k] >= 0 
                && M[row[k]][col[k]] == 1){
                 count++;
               dfs(M, n, m, row[k], col[k],count);
            }

        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
       int mx=INT_MIN;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] ==1){
                    int c=1;
                    dfs(grid, n, m, i, j,c);
                        mx=max(mx,c);
                }
            }
        }
        return mx==INT_MIN?0:mx;
    }
};