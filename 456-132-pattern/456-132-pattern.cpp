class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size(),mn= INT_MIN;
        stack<int> s;
        for(int i=n-1;i>=0;i--)
        {
            if(mn>nums[i])
                    return true;
            while(!s.empty() && nums[i]>s.top())
            {   mn = s.top();
                s.pop();
            }
            s.push(nums[i]);
        }
        return false;
    }
};