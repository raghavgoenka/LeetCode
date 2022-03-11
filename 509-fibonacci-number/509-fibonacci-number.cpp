class Solution {
public:
    int fib(int n) {
     int a=0,b=1,c=0;
        if(n==0){return a;}
        if(n==1){return b;}
            n=n-2;
        for(int i=0;i<=n;i++)
        {
            c=a;
            a=b;
            b=c+b;
        }
        return b;
    
    }
};