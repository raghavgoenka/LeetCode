class Solution {
public:
    int numRescueBoats(vector<int>& p, int l) {
       sort(p.begin(),p.end());
        
         int i=0,j=p.size()-1,c=0;
        while(i<=j)
        {
            if(i==j){c++;p[i]=0;i++;j--;}
            else if(p[i]+p[j]>l){p[j]=INT_MAX;j--;c++;}
            else if(p[i]+p[j]<=l){p[i]=0;p[j]=INT_MAX;i++;j--;c++;}
            
        }
        return c;
        
        
    }
};