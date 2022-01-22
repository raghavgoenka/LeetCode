class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            string s=words[i];
            int j=0,k=s.size()-1,flag=0;
            while(j<=k)
            {
                if(s[j++]!=s[k--]){flag=1;break;}
            }
            if(flag==0){return s;}
        }
        return "";
    }
};