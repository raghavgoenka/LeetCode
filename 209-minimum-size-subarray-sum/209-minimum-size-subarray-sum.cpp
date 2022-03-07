class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) {
        
     long int sum=nums[0];
        int i=0,j=1,n=nums.size(),mn=INT_MAX;
        if(sum>=t){return 1;}
        while(j<n)
        {  sum+=nums[j];
            while(sum>=t&&i<n)
            {
                mn=min(mn,(j-i)+1);
                sum=sum-nums[i];
                i++;
            }
            j++;
        }
        
        return mn==INT_MAX?0:mn;
    }
};