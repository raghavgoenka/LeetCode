class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int res,left=0,right=nums.size()-1;
        
        while(left<=right)
        {
            res=left+(right-left)/2;
            if(nums[res]==target) return res;
            
            if(target<nums[res]) right=res-1;
            else left=res+1;
            
        }
        return -1;
    }
    
};

 