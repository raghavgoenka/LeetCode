class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0){
                for(int a=0;a<m;a++ ){
                    if(matrix[i][a]!=0){matrix[i][a]=-11111;}
                }
                    for(int b=0;b<n;b++){
                       if(matrix[b][j]!=0){matrix[b][j]=-11111;}
                }
             }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++){
                if(matrix[i][j]==-11111){matrix[i][j]=0;}
            }
        }
    }
};