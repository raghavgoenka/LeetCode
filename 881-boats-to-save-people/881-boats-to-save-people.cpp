class Solution {
public:
    int numRescueBoats(vector<int>& p, int l) {
       sort(p.begin(),p.end());
        
         int i=0,j=p.size()-1,c=0;
        while(i<=j)
        {
            if(i==j){c++;i++;j--;}
            else if(p[i]+p[j]>l){j--;c++;}
            else if(p[i]+p[j]<=l){i++;j--;c++;}
            
        }
        return c;
        
        
    }
};