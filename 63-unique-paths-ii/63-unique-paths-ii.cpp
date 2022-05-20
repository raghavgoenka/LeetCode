
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& m) {
        int a=m.size(),b=m[0].size();
        int dp[a][b];
        if(m[0][0]==1||m[a-1][b-1]==1){return 0;}
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                if(m[i][j]!=1)
                {
                    if(i==0||j==0)
                    { if(i==0&&j==0){dp[i][j]=1;}
                     
                       else if(i==0){ dp[i][j]=dp[i][j-1];}
                       else if(j==0){dp[i][j]=dp[i-1][j];}              
                    }
                    else
                    {
                        dp[i][j]=dp[i-1][j]+dp[i][j-1];
                    }
                }
                else{
                    dp[i][j]=0;
                }
            }
            
        }
        return dp[a-1][b-1];
    }
};