class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mn=p[0],profit=0;
        
        for(int i=1;i<p.size();i++)
        {
            if(mn>p[i]){mn=p[i];}
            if((p[i]-mn)>profit){profit=p[i]-mn;}
            
        }
        return profit;
    }
};