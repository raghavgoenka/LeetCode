class Solution {
public:
    bool check(long long mid,vector<int>& time,int t)
    {
       
       long long  c=0;
            for(int i=0;i<time.size();i++)
            {
                c+=mid/time[i];
                 if(c>=t){return true;}
            }
       
         return false;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        
        
        long long low=1,high=1e14;
        while(low<=high)
        {
            long long mid=low+(high-low)/2;
           
            if(check(mid,time,totalTrips)){
                
                high=mid-1;
            }
            else{low=mid+1;}
        }
        return low;
    }
};