class Solution {
public:
    long long int same(long long int n)
    {
        return (n*(n-1)/2)%mod;
        
    }
    long int mod=1e9+7;
    int threeSumMulti(vector<int>& arr, int target) {
        map<long long int,long long int>mp;
        sort(arr.begin(),arr.end());
        long int res=0;
        for(int i=0;i<arr.size();i++){mp[arr[i]]++;}
       auto ip = std::unique(arr.begin(), arr.end());
       arr.resize(std::distance(arr.begin(), ip));
        for(int i=0;i<arr.size();i++)
        { int a=target- 2*arr[i];
           if(mp[a]>0&&a>arr[i]){res+=(same(mp[arr[i]])*mp[a]);}
         
            for(int j=i+1;j<arr.size();j++)
            {
                int rem=target-(arr[i]+arr[j]);
                
                if(mp[rem]>0&&rem>=arr[i]&&rem>=arr[j])
                { 
                    if(rem!=arr[i]&&rem!=arr[j]){res+=(mp[rem]%mod * mp[arr[i]]%mod * mp[arr[j]]%mod)%mod;}
                    else{
                        if(rem==arr[i]){res+=(same(mp[arr[i]]) *mp[arr[j]]%mod)%mod;}
                        else if(rem==arr[j]){res+=(same(mp[arr[j]]) *mp[arr[i]]%mod )%mod;}
                    }
                }
            
            }
           
            
        }
        int a=target/3;
        if(a*3==target&&mp[a]>0){res+=(mp[a]*(mp[a]-1)*(mp[a]-2))/6;}
        
        return res%mod;
    }
};