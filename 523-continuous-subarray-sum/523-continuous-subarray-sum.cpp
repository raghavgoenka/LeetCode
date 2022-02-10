class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size(),sum=0;
        unordered_map<int,int>mp;
        
        if(n==1){return false;}
        
        if((nums[0]+nums[1])%k==0){return true;}
   
        mp[0]=-1;
      
        for(int i=0;i<n;i++){
            sum+=nums[i];
           if(sum%k==0&&i>0){return true;}
          if (mp.find(sum%k) != mp.end()&&i-mp[sum%k]>=2){
              return true;
          }
       if(mp.find(sum%k)==mp.end())
            mp[sum%k]=i;

            
        }
        return false;
    }
};