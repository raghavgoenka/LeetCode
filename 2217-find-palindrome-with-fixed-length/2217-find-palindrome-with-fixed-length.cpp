class Solution {
public:
    vector<long long> kthPalindrome(vector<int>& queries, int n) {
        int t=(n-1)/2;
        int tt=(n+1)/2;
        vector<long long>v;
        long long tot=9*(pow(10,t));
        long long h=pow(10,tt-1);
        
        for(int i=0;i<queries.size();i++)
        {
            if(queries[i]>tot){v.push_back(-1);continue;}
            long long b,c;
                
                b=h+queries[i]-1;
          
            string res=to_string(b);
            string res2=res;
            reverse(res.begin(),res.end());
            if(n%2==0){res2=res2+res; }
            else{res2=res2+res.substr(1,res.size());}
            long long r=stol(res2);v.push_back(r);
             
        }
        return v;
    }
};