class Solution {
public:
    int n,n1;

    bool match(int a[],int b[],string p)
    {
        for(int i=0;i<n1;i++)
        {  
            if(b[p[i]-'a']!=a[p[i]-'a']||(b[p[i]-'a']==0&&a[p[i]-'a']==0)){return false;}
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int a[26]={0},b[26]={0};
        vector<int>v;
        n=s.size(),n1=p.size();
        if(n1>n){return v;}
        
        for(int i=0;i<n1;i++)
        {
           b[p[i]-'a']++;
        }
        
        int i=0,j=0;
        while(i<n)
        {
           
            a[s[i]-'a']++;
            if((i-j)+1==n1&&match(a,b, p))
            {v.push_back(j);
             }
            if((i-j)+1==n1)
            {a[s[j]-'a']--;                           
            j++;}
            i++;
        }
        return v;
    }
};