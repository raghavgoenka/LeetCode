class Solution {
public:
    int findMaxLength(vector<int>&nums) {
        unordered_map<int,int>m;
        int count=0;
        int ans=0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==1)count++;
            else count--;
            if(count==0) ans = i+1;
            
            if(m.find(count)!=m.end()){
                ans = max(ans,i-m[count]);
            }
            else m[count]=i;
            
        }
       
        return ans;
            
    }
};