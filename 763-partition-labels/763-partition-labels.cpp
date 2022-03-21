class Solution {
public:
    vector<int> partitionLabels(string s) {
        
       map<char,int>mp;
        int n=s.size();
        for(int i=0;i<n;i++){mp[s[i]]=i;}
        
       
        vector<int>v;
       
                int t=mp[s[0]],c=0;
            
             int i=0;
        while(i<n)
             {
                
                 t=max(t,mp[s[i]]);
            
                   if(i==t)
                   {
                       t+=1;
                       v.push_back(t-c);

                       c=t;
                       i=t;

                      continue;
                   }
            i+=1;
             }

       
        return v;
    }
};