class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>res;
        int n=s.size();
        int b=0;
        string a="";
        for(int i=0;i<n;i++)
        {
            a+=s[i];
            b++;
            if(b==k)
            {
                b=0;
                res.push_back(a);
                a="";
            }
        }
        if(b>0&&b<k){
        for(int i=1;i<=(k-b);i++)
        {
            a+=fill;
        }
        res.push_back(a);
        }
        
        return res;
    }
};