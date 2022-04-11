class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size(),m=grid[0].size();
        if(n*m==k){return grid;}
        for(int i=0;i<k;i++)
        {
            int temp=grid[n-1][m-1];
            for(int j=n-1;j>=0;j--)
            {
                for(int k=m-1;k>=0;k--)
                {
                    
                    if(k==0&&j!=0){grid[j][k]=grid[j-1][m-1];continue;}
                    if(k!=0)grid[j][k]=grid[j][k-1];
                    
                }
            }
            grid[0][0]=temp;
        }
        return grid;
    }
};