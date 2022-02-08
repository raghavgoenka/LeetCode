class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>v;
        int n=arr.size()-1;
        if(x<=arr[0])
        {
            for(int i=0;i<k;i++){v.push_back(arr[i]);}
        }
        else if(x>=arr[n]){
           for(int i=n;i>(n-k);i--){v.push_back(arr[i]);}
        }
        else{
            priority_queue<pair<int,int>>pq;

                for(int i=0;i<arr.size();i++){
                    
                pq.push({abs(arr[i]-x),arr[i]});
                    
                if(pq.size()>k)
                    
                {pq.pop();}
                }
                
                while(pq.size()>0){
                v.push_back(pq.top().second);
                pq.pop();
                }
        }
        sort(v.begin(),v.end());
       return v; 
    }
};