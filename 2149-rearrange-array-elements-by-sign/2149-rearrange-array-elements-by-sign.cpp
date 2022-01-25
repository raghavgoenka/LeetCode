class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>a,b;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0){a.push_back(nums[i]);}
            else{b.push_back(nums[i]);}
          
        }
        int k=0;
        for(int i=0;i<nums.size();i+=2)
          {
              nums[i]=a[k];
              nums[i+1]=b[k];
            k++;
          }
            return nums;
    }
};