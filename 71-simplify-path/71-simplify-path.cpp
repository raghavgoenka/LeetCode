class Solution {
public:
    string simplifyPath(string path) {
        stack<string>s;
        string t="";
        int n=path.size();
        if(path[n-1]!='/'){path.push_back('/');n+=1;}
        
        for(int i=0;i<n;i++)
        {
            if(path[i]=='/')
            {
                if(t.size()>0){
                if(t[0]=='.')
                {
                    if(t.size()==2&&!s.empty()){s.pop();}
                    else if(t.size()>2){s.push(t);}
                  
                }
                else{s.push(t);}
                }
                t="";
                
            }
            else{
            
              t+=path[i];
            }
            
        }
         
        string res;
        while(!s.empty())
        {
             res.insert(0, s.top());
            res.insert(0, "/");
            
            s.pop();
      }
       
        
        
        return res.size()>0?res:"/";
    }
};