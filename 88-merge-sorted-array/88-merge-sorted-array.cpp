class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int p=m;
        for(int i=0;i<n;i++){
            nums1[p]=nums2[i];
            p++;
        }
        sort(nums1.begin(),nums1.end());
    }
};