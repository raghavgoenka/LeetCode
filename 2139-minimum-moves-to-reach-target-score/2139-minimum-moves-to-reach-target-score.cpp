class Solution {
public:
    int minMoves(int t, int d) {
        if(d==0){return t-1;}
        int c=0;
        while(d--&&t>1)
        {
        
            
            c++;
            if(t%2!=0){c++;}
            
            t=t/2;
        }
        c+=t-1;
        return c;
    }
};