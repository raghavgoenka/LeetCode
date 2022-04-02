class Solution {
public:
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;
        int c=0;
        
        while(i<j)
        {   
            if(s[i]!=s[j]){
              string a=s;
                a.erase(i,1);
                string b=a;
                reverse(a.begin(),a.end());
                if(a==b){return true;}
                 a=s;
                a.erase(j,1);
                 b=a;
                reverse(a.begin(),a.end());
                if(a==b){return true;}
                
                return false;
                }
            i++,j--;

        }
        return true;
    }
};