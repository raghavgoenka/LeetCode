class Solution {
public:
    int singleNumber(vector<int>& nums) {
         map<int,int>mp;
        for(int i=1;i<nums.size();i++){mp[nums[i]]++;}
                                      
    for(auto i:mp){if(i.second==1){return i.first;}}
        return 1;
    }
};