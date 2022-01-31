class Solution {
public:
    string arr[8]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    void combination(string dig,int in,string res,vector<string>&v)
   {
       
        if(in==dig.size())
        {
            v.push_back(res);
            return;
        }
        
        int j=(dig[in]-'0')-2;
        
        for(int i=0;i<arr[j].size();i++)
        { 
               
           
            res+=arr[j][i];
            // cout<<j<<" "<<i<<" "<<res<<endl;     
            combination(dig,in+1,res,v);
            res.pop_back();
        }
        
    }
    vector<string> letterCombinations(string dig) {
        int n=dig.size();
        vector<string>v;
        if(n==0){return v;}
        combination(dig,0,"",v);
        return v;
    }
};