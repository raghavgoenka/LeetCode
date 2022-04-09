class Solution {
public:
    int dx[4]={0,1,-1,0};
    int dy[4]={1,0,0,-1};
    void dfs(vector<vector<char>>& board,int i,int j,vector<vector<int>>&vis,int n,int m)
    {
        
        for(int p=0;p<4;p++)
        {
            int x=i+dx[p];
            int y=j+dy[p];
            if(x>=0&&y>=0&&x<n&&y<m&&vis[x][y]==0&&board[x][y]=='O')
            {  vis[x][y]=1;
                dfs(board,x,y,vis,n,m);
            }
        }
        return ;
        
        
    }
    void solve(vector<vector<char>>& board) {
        int n=board.size(),m=board[0].size();
         vector<vector<int>> vis(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if((i==0||j==0||i==n-1||j==m-1)&&vis[i][j]==0&&board[i][j]=='O')
                {
                    
                    dfs(board,i,j,vis, n, m);
                }
            }
        }
        
      for(int i=1;i<n-1;i++)
        {
            for(int j=1;j<m-1;j++)
            {
                if(board[i][j]=='O'&&vis[i][j]==0)
                {
                    
                    board[i][j]='X';
                }
            }
        }
        
    }
};