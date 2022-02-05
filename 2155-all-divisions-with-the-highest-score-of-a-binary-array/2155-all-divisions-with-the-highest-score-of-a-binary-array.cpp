class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& arr) {
        map<int,vector<int>>mp;
        int res=INT_MIN,one=0,n=arr.size(),zero=0;
        for(int i =0;i<n;i++)
        {
            if(arr[i]==1){one++;}
        }
        
        mp[one].push_back(0);
        res=one;
        int sum=0;
        for(int i=0;i<n;i++)
        {
             if(arr[i]==0){zero++;}
            else if(arr[i]==1){one--;}
            sum=one+zero;
            mp[sum].push_back(i+1);
            res=max(res,sum);
            sum=0;
        }
        return mp[res];
    }
};