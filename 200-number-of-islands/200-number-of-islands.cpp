class Solution {
public:
   
     void dfs(vector<vector<char>>& M, int n, int m, int i, int j){
        M[i][j] = 'x';
        vector<int>row = {i + 1, i - 1, i, i};
        vector<int>col = {j, j, j + 1, j - 1};
        for(int k = 0; k < 4; k++){
            if(row[k] < n && col[k] < m && row[k] >= 0 && col[k] >= 0 
                && M[row[k]][col[k]] == '1'){
              
                dfs(M, n, m, row[k], col[k]);
            }
        }
         
         
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
       
        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == '1'){
                    cnt++;
                    dfs(grid, n, m, i, j);
                }
            }
        }
        return cnt;
    
    }
};