class Solution {
public:
    double power(double x,long int y)
        {
    
            double res = 1;
        if(y==0){return 1;}
            while (y > 0)
            {
                if (y & 1){
                    res=(res*x);
                  
                }
                y=y>>1;
                x=(x*x);
                  
            }
            return res;
        }
    double myPow(double x, int n) {
        long int p=n;
        double res=power(x,abs(p));
       
        if(n<0){res=1/res;}
        return res;
    }
};