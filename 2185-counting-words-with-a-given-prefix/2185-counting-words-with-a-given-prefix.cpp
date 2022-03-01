class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=pref.size(),c=0;
        for(int i=0;i<words.size();i++)
        {
            string s=words[i].substr(0,n);
            if(pref==s){c++;}
        }
        return c;
    }
};