class Solution {
public:
      bool isValid(vector<vector<char>>& board,int r,int col,char c)
    {
          board[r][col]='.';
        
        for(int i=0;i<9;i++)
        {
           
            if(board[r][i]==c || board[i][col]==c||board[3*(r/3)+i/3][3*(col/3)+i%3]==c){return false;}
            
          
        }
        return true;
        
    }
    
    bool solveboard(vector<vector<char>>& board)
    {
        
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            { 
                if(board[i][j]!='.')
                {
                    
                        if(isValid(board,i,j,board[i][j])==0)
                        {
                            
                            return false;
                        }
                }
        }
           
        }
        return true;
        
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        return solveboard(board);
    }
};