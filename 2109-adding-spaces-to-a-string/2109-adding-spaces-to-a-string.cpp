class Solution {
public:
    string addSpaces(string s, vector<int>& sp) {
        
        string res="";
        int k=0,i=0;
      
        for(;i<s.size();i++)
        {
            if(k<sp.size()&&i==sp[k]){res+=' ';
             k++;
            }
            res+=s[i];
         
        }
        if(i==sp[sp.size()-1]){res+=' ';}
    return res;
    }
};