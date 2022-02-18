class Solution {
public:
    string removeKdigits(string num, int k) {
        
        string t="";
        for(char c:num)
        {
            while(t.size()>0&&k>0&&t.back()>c){t.pop_back();k--;}
            
            if(t.size()>0||c!='0'){t.push_back(c);}
        }
        
        
        while(t.size()>0&&k>0){t.pop_back();k--;}
        if(t.size()==0){return "0";}
      
        return t;
        
    }
};