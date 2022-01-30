class Solution {
public:
    int findFinalValue(vector<int>& nums, int o) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){mp[nums[i]]++;}
        
        while(mp[o]>0)
        {
            o*=2;
            
        }
        
        return o;
    }
};