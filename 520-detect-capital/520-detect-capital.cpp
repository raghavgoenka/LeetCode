class Solution {
public:
    bool detectCapitalUse(string w) {
        if(isupper(w[0]))
        { int f=0;
          for(int i=1;i<w.size();i++){if(w[i]>=65&&w[i]<=90){continue;}else{f=1;break;}}
                   
           if(f==0){return true;} 
        }
        if(islower(w[0]))
        {
            int f=0;
          for(int i=1;i<w.size();i++){if(w[i]>=65&&w[i]<=90){f=1;break;}}
                   
           if(f==0){return true;} 
        }
        if(w[0]>=65&&w[0]<=90)
        {
            for(int i=1;i<w.size();i++){if(w[i]>=65&&w[i]<=90){return false;}}
            
            return true;
        }
        return false;
    
    }

};