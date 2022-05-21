class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int dp[amount+1], n = coins.size();
        dp[0] = 0;
        
        for(int i = 1; i < amount+1; i++) {
            dp[i] = amount+1;
            for(int j = 0; j < n; j++) {
                if(i>=coins[j]) {
                    dp[i] = min(dp[i],dp[i-coins[j]]+1);
                }
            }
        }
        
        if(dp[amount] != amount+1)  return dp[amount];
        else return -1;

    }
};