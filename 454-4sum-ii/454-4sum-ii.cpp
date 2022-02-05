class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
       map<long int,int>mp;
        for(int i=0;i<nums3.size();i++)
        {
            for(int j=0;j<nums4.size();j++)
            {
                mp[nums3[i]+nums4[j]]++;
            }
        }
        int c=0;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
              c+=mp[-(nums1[i]+nums2[j])];
            }
        }
        return c;
       
    }
};