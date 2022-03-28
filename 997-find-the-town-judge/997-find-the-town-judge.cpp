class Solution {
public:
    int findJudge(int v, vector<vector<int>>& trust) {
        
        int n=trust.size();
        if(n==0&&v==1){return 1;}
        else if(n==0){return -1;}
        
        vector<int> edge(n+1);
        edge.assign(n+2,0);
        for(auto i:trust)
        {  
            edge[i[0]]++;
            edge[i[1]]--;
        }
        for(int i=1;i<=v;i++)
        {  
            if((edge[i])==-1*(v-1)){return i;}
        }
        return -1;
    }
};