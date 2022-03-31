class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++)
        {
            if(t>=mat[i][0]&&t<=mat[i][m-1])
            {
                int j=0,k=m-1;
                while(j<=k)
                {
                    int mid=j+(k-j)/2;
                    if(mat[i][mid]==t){return true;}
                    else if(mat[i][mid]>t){k=mid-1;}
                    else {j=mid+1;}
                }
            }
        }
        return false;
    }
};