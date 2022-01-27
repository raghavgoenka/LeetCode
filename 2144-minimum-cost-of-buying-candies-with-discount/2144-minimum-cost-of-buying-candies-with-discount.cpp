class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int sum=0,n=cost.size();
        if(n==1){return cost[0];}
        sort(cost.begin(),cost.end());
        for(int i=n-1;i>0;i-=3)
        {
            sum+=cost[i]+cost[i-1];
        }
        if(n%3==1){sum+=cost[0];}
        return sum;
    }
};