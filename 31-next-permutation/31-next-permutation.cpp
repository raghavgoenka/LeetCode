class Solution {
public:
    
    void nextPermutation(vector<int>& nums) {
       
        int n=nums.size();
        int k=-1;
        for(int i=n-1;i>0;i--)
        {
            if(nums[i]>nums[i-1]){k=i;break;}
        }
        if(k<=0)
        {
            sort(nums.begin(),nums.end());return;
        }
        cout<<k<<" ";
        for(int i = n-1;i>=0;i--){
            if(nums[i]>nums[k-1]){
                swap(nums[i], nums[k-1]);
                sort(nums.begin()+k, nums.end());
                break;
            }
        }

    }
};