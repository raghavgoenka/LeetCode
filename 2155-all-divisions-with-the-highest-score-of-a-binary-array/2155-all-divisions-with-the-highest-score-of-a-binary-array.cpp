class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& arr) {
        
        int res,one=0,n=arr.size(),zero=0;
        for(int i =0;i<n;i++)
        {
            if(arr[i]==1){one++;}
        }
        vector<int>mp;
        mp.push_back(0);
        res=one;
       
        for(int i=0;i<n;i++)
        {
             if(arr[i]==0){zero++;}
            else if(arr[i]==1){one--;}
            
           if(res==one+zero){mp.push_back(i+1);}
            else if(one+zero>res){res=one+zero;mp.clear();mp.push_back(i+1);}
            
            
        }
        return mp;
    }
};