class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]+=nums[i];
        }
        int Max = *max_element(nums.begin(), nums.end());

         int dp[20005];
        memset(dp, 0, sizeof(dp));
        dp[1] = mp[1];
        for(int i = 2; i <= Max + 2; i++){
            dp[i] = max(dp[i - 2] + mp[i], dp[i - 1]);
        }
        return dp[Max];
        
        
    }
};