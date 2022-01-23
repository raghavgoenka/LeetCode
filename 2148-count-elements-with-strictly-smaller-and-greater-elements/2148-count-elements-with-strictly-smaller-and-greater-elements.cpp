class Solution {
public:
    int countElements(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int c=0;
        int n=arr.size(),a=arr[0],b=arr[n-1];
        for(int i=1;i<n-1;i++)
        {
            if(arr[i]>a&&arr[i]<b){c++;}
        }
        return c;
    }
};