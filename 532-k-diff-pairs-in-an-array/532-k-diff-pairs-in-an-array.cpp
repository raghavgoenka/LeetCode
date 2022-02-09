class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),c=0;
        for(int i=0;i<n-1;i++)
        {
            if(i>0&&nums[i]==nums[i-1]){continue;}
            
            int l=i+1,r=n;
             int key=nums[i]+k;
            while(l<=r)
            {
                int mid=l+(r-l)/2;
                
                if(nums[mid]==key){c++;break;}
                else if(nums[mid]>key){r=mid-1;}
                else{l=mid+1;}
            }
        }
        return c;
    }
};