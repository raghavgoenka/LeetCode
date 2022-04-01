class Solution {
public:
    bool increasingTriplet(vector<int>& arr) {
        int n=arr.size();
        int i;
        int small=INT_MAX,large=INT_MAX;
        for(int i=0;i<n;i++)
        {
            
            if(arr[i]<=small)
                small=arr[i];

            else if(arr[i]<=large)
                large=arr[i];
          
            else
                return true;
        }
       
            return false;
    }
};