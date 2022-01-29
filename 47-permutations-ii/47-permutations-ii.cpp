class Solution {
public:
    void permutations(int ind,vector<int>& nums, set<vector<int>>& res)
    {
        if(ind>=nums.size())
        {
            res.insert(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++)
        {
            
            swap(nums[ind],nums[i]);
            permutations(ind+1,nums,res);
            swap(nums[i],nums[ind]);
               
            
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         

        set<vector<int>> res;
        
        permutations(0,nums,res);
        vector<vector<int>>r;
        for(auto it=res.begin();it!=res.end();it++)
        {
            r.push_back(*it);
        }
        return r;
    
    }
};