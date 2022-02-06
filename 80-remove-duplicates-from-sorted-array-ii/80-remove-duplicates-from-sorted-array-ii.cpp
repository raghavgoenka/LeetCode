class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        
        int j=0,n=arr.size(),c=1,k=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]!=arr[i-1]){
             j++;    
            arr[j]=arr[i];
            
                c=1;
            
            }
            else if(arr[j]==arr[i]&&c<2)
            {
                j++;
                arr[j]=arr[i];
                
                c++;
            }
           
        }
       
        return j+1;
        
    }
};