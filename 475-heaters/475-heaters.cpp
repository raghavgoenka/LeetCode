class Solution {
    typedef long long int ll;
public:
    bool check(ll mid,vector<int>&houses,vector<int>&heaters)
    {
     
        ll a=houses.size(),b=heaters.size();
        ll i=0,j=0;
         ll mx,mn;
        
        while(j<b&&i<a)
        {
            mx=heaters[j]+mid;mn=heaters[j]-mid;

            if(houses[i]<=mx&&houses[i]>=mn){i++;}
            else{j++;}
        }
      
        if(i==a){return true;}
        
        return false;
    }
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(),houses.end());
    sort(heaters.begin(),heaters.end());
        int n=houses.size();
        ll low=0,high=1e9;
        ll res=1e9+7;
        while(low<=high)
        {
            ll mid=low+(high-low)/2;
            if(check(mid,houses,heaters))
            {   
                high=mid-1;
                 res=min(res,mid);
              
            }
            else{low=mid+1;}
        }
        return res;
    }
};