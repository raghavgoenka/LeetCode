class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
      int b = -1;
        int max = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(max > nums[i]){ 
                b = i; 
            }
            else{
                max = nums[i];
            }
        }
        
        int a = 0;
        int min = nums[nums.size() - 1];
        for(int i = nums.size() - 2; i >= 0; i--){
            if(min < nums[i]){ 
                a = i; 
            }
            else{
                min = nums[i];
            }
        }
        cout<<a<<" "<<b;
        return b - a + 1;
    }
    
};