class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        
        for(char c:num)
        {
            while(!st.empty()&&k>0&&st.top()>c){st.pop();k--;}
            
            if(!st.empty()||c!='0'){st.push(c);}
        }
        
        
        while(!st.empty()&&k>0){st.pop();k--;}
        if(st.empty()){return "0";}
        string t="";
        while(!st.empty()){t=st.top()+t;st.pop();}
        return t;
        
    }
};