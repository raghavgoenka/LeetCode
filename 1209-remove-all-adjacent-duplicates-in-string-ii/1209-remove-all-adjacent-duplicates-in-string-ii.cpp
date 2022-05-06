class Solution {
public:
    
    string removeDuplicates(string s, int k) {
        
        stack<int>st;
        string res="";
        map<int,int>mp;
        int n=s.size();
        st.push(0);
        for(int i=1;i<n;i++)
        {
           
           if(!st.empty()&&s[i]==s[st.top()]){mp[i]=mp[st.top()]+1;}
            st.push(i);
            // cout<<s[i]<<" "<<mp[i]<<" "<<endl;
            if(mp[st.top()]==k-1)
            {  
                int p=k;
                while(p--){st.pop();}
            }
        }
        while(!st.empty())
        {
           res+=s[st.top()];
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};