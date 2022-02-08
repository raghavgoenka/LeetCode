class Solution {
public:
     bool recc(vector<int>& nums, vector<int>& vis, int idx,int curr_sum, int sum,int bucket)
    {
       
        if(bucket==0)
            return true;
      
        if(curr_sum==sum)
        {
            return recc(nums, vis,0,0, sum,bucket-1);
        }
        for(int i=idx;i<nums.size();i++)
        {
            if((i>0 && nums[i]==nums[i-1] && vis[i-1]==-1)|| curr_sum+nums[i]>sum || vis[i]==1 )
               continue;
            
               
                vis[i]=1;
            
                if(recc(nums,vis,i+1, curr_sum+nums[i],sum, bucket))
                    return true;
            
        
                vis[i]= -1;
        
        }
        return false;
    }
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum = 0;
        for(auto it: nums)
        {
            sum +=  it;
        }
        
        if(sum%k)
            return false;
        
        int n= nums.size();
        vector<int>vis(n,-1);
     sort(nums.begin(),nums.end());
      return  recc(nums,vis,0,0,sum/k,k );
    }
};

    