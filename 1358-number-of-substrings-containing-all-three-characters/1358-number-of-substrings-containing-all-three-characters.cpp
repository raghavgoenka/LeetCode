class Solution {
public:
    int numberOfSubstrings(string s) {
        int a[3]={0};
         int j=0,i=0,c=0,n=s.size();
       
       for(;j<n;j++)
        {
           
            while(i<n&&(a[0]<=0||a[1]<=0||a[2]<=0)){
            a[s[i++]-'a']++;
                
            }
            
            if(a[0]>0&&a[1]>0&&a[2]>0)
            {c+=n-(i-1);a[s[j]-'a']--;}
            
          
            
        }
        return c;
        
    }
};