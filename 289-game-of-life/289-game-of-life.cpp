class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size(),m=board[0].size();
        int dx[8]={0,0,1,-1,1,1,-1,-1};
        int dy[8]={1,-1,0,0,1,-1,1,-1};
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int cnt=0;
                for(int p=0;p<8;p++)
                {   int a=i+dx[p];
                    int b=j+dy[p];
                    if(a>=0&&a<n&&b>=0&&b<m&&(board[a][b]==1||board[a][b]==-1)){cnt++;}
                 }
                cout<<cnt<<" ";
               if(board[i][j]==1) 
                {   if(cnt<2)
                     board[i][j]=-1; 
                   if(cnt>3)
                     board[i][j]=-1; 
                }
                else if(board[i][j]==0)
                {
                    if(cnt==3)
                    board[i][j]=-2; 
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==-1){board[i][j]=0;}
                else if(board[i][j]==-2){board[i][j]=1;}
            }
        }
    }
};