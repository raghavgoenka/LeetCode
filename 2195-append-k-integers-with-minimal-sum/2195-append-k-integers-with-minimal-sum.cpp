
class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        int n=nums.size();
        long long p=k;
       long long sum=p*(p+1)/2;
      p=0;
        map<long long,int>mp;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<=k&&mp[nums[i]]==0){p++;sum-=nums[i];}
            mp[nums[i]]++;
        }
        
       long int i=k+1;
        while(p!=0)
        {
           if(mp[i]==0){p--;sum+=i;}
            i++;
        }
        
        return sum;
        
    }
    
};