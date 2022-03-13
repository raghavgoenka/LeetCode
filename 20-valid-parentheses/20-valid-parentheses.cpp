class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto i:s)
        {
            if(i=='('||i=='{'||i=='['){st.push(i);}
            
            else if(!st.empty()&&(i==')'||i=='}'||i==']'))
            {
                
                char p=st.top();
               
                if(i==')'&&p!='('){return false;}
                else if(i=='}'&&p!='{'){return false;}
                else if(i==']'&&p!='['){return false;}
                
                st.pop();

            }
            else{return false;}
        }
        return st.empty()?true:false;;
    }
};