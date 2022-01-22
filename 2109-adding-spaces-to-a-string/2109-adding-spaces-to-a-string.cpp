class Solution {
public:
    string addSpaces(string s, vector<int>& sp) {
        
        string res="";
        int k=0;
      
        for(int i=0;i<s.size();i++)
        {
            if(k<sp.size()&&i==sp[k]){res+=' ';
             k++;
            }
            res+=s[i];
         
        }
        
    return res;
    }
};