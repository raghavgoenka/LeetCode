class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int a=0,b=0,c=0;
        for(int i=0;i<gas.size();i++)
        {
            a+=gas[i]-cost[i];
            b+=gas[i]-cost[i];
            if(b<0){b=0;c=i+1;}
        }
      
        if(a<0){return -1;}
        return c;
    }
};