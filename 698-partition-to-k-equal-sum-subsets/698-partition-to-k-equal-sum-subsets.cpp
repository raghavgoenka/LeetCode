class Solution {
public:
    bool partition(vector<int>& arr,vector<int>& vis,int i,int k,int cur,int sum)
    {
       
        if(k==0){ return true;}
       
        if(cur==sum)
        {
            return partition(arr,vis,0,k-1,0,sum);
        }
        
        
        for(int p=i;p<arr.size();p++)
        {
            if((p>0 && arr[p]==arr[p-1] && vis[p-1]==0)|| cur+arr[p]>sum || vis[p]==1 )
            {continue;}
            
            vis[p]=1;
            if(partition(arr,vis,p+1,k,cur+arr[p],sum)){return true;}
            vis[p]=0;
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
      return  partition(nums,vis,0,k,0,sum/k );
    }
};

    