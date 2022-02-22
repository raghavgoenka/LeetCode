class Solution {
public:
    string convertToTitle(int c) {
    string a[26]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
        
        if(c<=26){return a[c-1];}
        string s="";
        while(c>=1)
        {
              
        
            int rem=c%26;
            if(rem==0){rem=26;}
            int quo=(c-rem)/26;
            s=a[rem-1]+s;
            c=quo;
            if(c<=26){s=a[c-1]+s;return s;}
        }
    return s;
    }
};