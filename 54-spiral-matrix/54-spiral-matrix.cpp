class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        int n=a.size();
        int m=a[0].size();
        int row=0,col=m-1,row1=n-1,col1=0;
       
        vector<int>v;
        while(v.size()<n*m)
        {
            for(int i=col1;i<=col&&v.size()<n*m;i++){v.push_back(a[row][i]);}
            row++;
            for(int i=row;i<=row1&&v.size()<n*m;i++){v.push_back(a[i][col]);}
            col--;
            for(int i=col;i>=col1&&v.size()<n*m;i--){v.push_back(a[row1][i]);}
            row1--;
            for(int i=row1;i>=row&&v.size()<n*m;i--){v.push_back(a[i][col1]);}
            col1++;
     }
        
        return v;
    }
};
