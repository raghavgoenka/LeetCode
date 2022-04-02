class Solution {
public:
    int res=0;
     bool isSafePos(int row,int col,vector<string>&board,int n)
    {
        int r1=row,c1=col;
        while(row>=0&&col>=0)
        {
            if(board[row][col]=='Q'){return false;}
            row--;col--;
        }
        row=r1,col=c1;
        while(col>=0)
        {
            if(board[row][col]=='Q'){return false;}
            col--;
        }
        row=r1,col=c1;
        while(row<n&&col>=0)
        {
            if(board[row][col]=='Q'){return false;}
            row++;col--;
        }
        return true;
    }
    void solve(int col,vector<string>&board,int n)
    {
        if(col==n)
        {
            res++;
            return;
        }
        for(int row=0;row<n;row++)
        {
            if(isSafePos(row,col,board,n))
            {
                board[row][col]='Q';
                solve(col+1,board,n);
                board[row][col]='.';
            }
        }
    }
    int totalNQueens(int n) {
       
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {  board[i]=s;
        }
        solve(0,board,n);
        return res;
    }
};








