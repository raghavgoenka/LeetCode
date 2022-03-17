class Solution {
public:
     vector<int>row = {1,- 1, 0, 0};
    vector<int>col = {0, 0,  1, - 1};
    bool dfs(vector<vector<char>> &M, int n, int m, int i, int j,int ind,int p,string word){
    if(ind==p){return true;}

    M[i][j] = '1';
    
   
    for(int k = 0; k < 4; k++){
        
        if(row[k]+i < n && col[k]+j < m && row[k]+i >= 0 && col[k]+j >= 0 
            && M[row[k]+i][col[k]+j] == word[ind]){
          
          if(dfs(M, n, m, row[k]+i, col[k]+j,ind+1,p,word)){  return true;};
            }
    }
 M[i][j]=word[ind-1];
 return false;
}
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(),m=board[0].size(),p=word.size();
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(board[i][j]==word[0]
            && dfs(board, n, m, i, j,1,p,word))
            {
                return true;
            }
        }
    }
   
    return false;
    }
};