class Solution {
public:
    int titleToNumber(string c) {
        int res=0;
        
        for(int i=0;i<c.size();i++)
        {
            int d=c[i]-'A'+1;
            res=res*26 + d;
        }
        return res;
    }
};