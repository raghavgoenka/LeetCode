class Solution {
public:
    string getSmallestString(int n, int k) {
        
        string s="";
        for(int i=0;i<n;i++){s+='a';k--;}
        int i=0,j=n-1;
      
        while(k>0)
        {  
            if(k>=26){s[j]='a'+25;k-=25;}
            else if(k<26){s[j]='a'+k;k=0;}
          
            j--;
        }
        return s;
    }
};