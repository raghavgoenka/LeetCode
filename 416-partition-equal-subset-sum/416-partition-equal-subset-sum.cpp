class Solution {
public:
bool isSubsetSum(int n,vector<int>& arr, int sum){
      
        int dp[n+1][sum+1];
        
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                
                if(i==0&&j==0){dp[i][j]=1;}
                
                else if(i==0)
                {
                    dp[i][j]=0;
                }
                else if(j==0){dp[i][j]=1;}
                
                else{
                    
                    if(dp[i-1][j]==1){dp[i][j]=1;}
                    else{
                        int t=arr[i-1];
                        if(j>=t)
                        {
                            if(dp[i-1][j-t]==1){dp[i][j]=1;}
                            else{dp[i][j]=0;}
                           
                        }
                        else{dp[i][j]=0;}
                       
                    }
                }
                
            }
            if(dp[i][sum]==1){return true;}
        }
        return dp[n][sum];
    }
    bool canPartition(vector<int>& arr) {
         int sum=0,N=arr.size();
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        if(sum%2!=0){return 0;}
        
        return isSubsetSum(N,arr,sum/2);
    }
};