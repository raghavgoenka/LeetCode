class Solution {
public:
         long long  mod=1e9+7;

    int countOrders(int n) {
    long long res=1;
    int a=1;
     int t=n;
    while(t){
        res*=t;
        res%=mod;
        t--;
    }
    
    for(int i=1;i<=2*n;i=i+2){
        res*=(2*n-i);
        res%=mod;
    }
    return res;
    }
};