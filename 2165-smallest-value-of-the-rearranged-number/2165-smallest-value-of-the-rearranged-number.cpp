class Solution {
public:
    long long smallestNumber(long long num) {
       string s=to_string(num);
        if(s[0]=='-'){ sort(s.begin(),s.end(), greater<int>());s='-'+s.substr(0,s.size()-1);}
        else{
        sort(s.begin(),s.end());}
        if(s[0]=='0')
        {
            for(int i=0;i<s.size();i++){if(s[i]!='0'){swap(s[0],s[i]); break;}}
        }
         stringstream geek(s);
 
   
   long long x = 0;
    geek >> x;
        return x;
    }
};