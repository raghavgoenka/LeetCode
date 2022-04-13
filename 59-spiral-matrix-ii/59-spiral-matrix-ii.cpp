class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int>(n,0));
        
         int row=0,col=n-1,row1=n-1,col1=0;
       int k=n*n;
        int p=0,num=1;
        while(p<k)
        {
            for(int i=col1;i<=col&&p<k;i++){if(p<k){res[row][i]=num;num++;p++;}}
            row++;
            for(int i=row;i<=row1&&p<k;i++){if(p<k){res[i][col]=num;num++;p++;}}
            col--;
            for(int i=col;i>=col1&&p<k;i--){if(p<k){res[row1][i]=num;num++;p++;}}
            row1--;
            for(int i=row1;i>=row&&p<k;i--){if(p<k){res[i][col1]=num;num++;p++;}}
            col1++;
     }
        
        return res;
    }
};