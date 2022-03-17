class Solution {
public:
    int scoreOfParentheses(string s) {
        int res=0,c=0;
        stack<char>st;
        int f=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('){st.push(s[i]);f=1;}
            
            else{
                 st.pop();
                c=st.size();
                if(f==1){
                c>0?res+=pow(2,c):res++;
                }
                f=0;
            }
        }
        return res;
    }
};