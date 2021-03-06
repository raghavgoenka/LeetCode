class Solution {
public:
    int maxArea(vector<int>& ht) {
        int n=ht.size();
        int i=0,j=n-1;
        int ar=0;
        while(i<j)
        {
            ar=max(ar,min(ht[i],ht[j])*(j-i));
            if(ht[j]>=ht[i]){i++;}
            else{j--;}
        }
        return ar;
    }
};