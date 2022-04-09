class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>res;
        for(int i=0;i<nums.size();i++){mp[nums[i]]++;}
        vector<pair<int,int>>v;
        for(auto i:mp){v.push_back({i.second,i.first});}
        
        sort(v.begin(),v.end());
        for(int i=v.size()-1;i>=0&&k>0;i--)
        {
            res.push_back(v[i].second);
            k--;
        }
        return res;
    }
};