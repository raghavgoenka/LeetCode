class Solution {
public:
    int brokenCalc(int s, int t) {
        if(s==t){return 0;}
        int c=0;
        int n=ceil(double(t)/2.0);
        int res=n;
       
    
        while(n>s){
          if(n%2!=0){c++;n+=1;continue;}
            n=ceil(double(n)/2.0);
           }
        c+=abs(s-n);
   
        while(n<t){        
            n=n*2;c++;}
     
    if(n%2==0&&t%2!=0){c++;}
        if(s>t){return min(c,s-t);}
        return c;
        
       
    }
};