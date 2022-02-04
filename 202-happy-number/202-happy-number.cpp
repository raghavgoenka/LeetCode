class Solution {
public:
    bool isHappy(int n) {
         unordered_map<int,int>m;
        int sum=0;
        m[n]=true;
        while(true)
        {
            while(n>0)
            {
                sum+= pow(n%10,2);
                n=n/10;
            }
            if(sum==1)
                return true;
            if(m.find(sum)!=m.end())
                return false;
            m[sum]=true;
            n=sum;
            sum=0;
        }
        return true;
        
    }
};