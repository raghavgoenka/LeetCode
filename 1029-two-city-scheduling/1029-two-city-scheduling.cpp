class Solution {
public:
    static bool comp( vector <int> &a, vector <int> &b ){
    if( a[0] - a[1]  < b[0] - b[1]) {return true;} 
    else {return false;}
      }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(),costs.end(),comp);
        
        int res=0,j=costs.size()-1,i=0;
        while(i<j)
        {
            res+=costs[i][0]+costs[j][1];
            i++;j--;
        }
        return res;
    }
};