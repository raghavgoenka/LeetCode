class Solution {
public:
    int countCollisions(string d) {
        int count =0,r=0,l=0,s=0;
        
        for(int i=0;i<d.size();i++)
        {
            if(d[i]=='S'){count+=r;r=0;s++;}
            else if(d[i]=='R'){r++;s=0;}
            else if(d[i]=='L')
            {   if(s>0){count++;}
                else if(r>0){count+=2;s++;r--;count+=r;r=0;}
            }
            
        }
        return count;
    }
};