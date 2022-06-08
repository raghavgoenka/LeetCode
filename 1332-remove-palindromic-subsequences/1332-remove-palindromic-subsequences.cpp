class Solution {
public:
    int removePalindromeSub(string s) {
        int st = 0;                   
        int en = s.size()-1;         
        
        while(st < en)
        {if(s[st++] != s[en--])
                return 2;
        }
        
       
        return 1;
    }
};