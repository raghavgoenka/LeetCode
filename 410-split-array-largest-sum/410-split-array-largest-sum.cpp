class Solution {
public:
    bool check(int mid,vector<int>nums,int n,int m)
    {
         int count = 0;
         int sum = 0;
         for (int i = 0; i < n; i++) {
 
      
        if (nums[i] > mid)
        {return false;}
 
         sum += nums[i];
 
       
        if (sum > mid) {
            count++;
            sum = nums[i];
        }
    }
    count++;
 
 
    if (count <= m)
    {return true;}
     return false;   
  }
public:
    int splitArray(vector<int>& nums, int m) {
        int i=INT_MIN,j=0,res=0;
        for(int p=0;p<nums.size();p++)
        {
            if(nums[p]>i){i=nums[p];}
            j+=nums[p];
             
           
            
        }
        while(i<=j)
        {
             int mid = (i + j) / 2;
 
      
        if (check(mid, nums, nums.size(), m)) {
            res = mid;
            j = mid - 1;
        }
        else {
            i = mid + 1;
        }
        }
        return res;
        
    }
};