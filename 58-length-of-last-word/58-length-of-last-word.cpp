class Solution {
public:
    int lengthOfLastWord(string s) {
        string res="";
        if(s.size()==0){return 0;}
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' '&&res.size()>0){return res.size();}
            else if(s[i]!=' '){res+=s[i];}
        }
        return res.size();
    }
};