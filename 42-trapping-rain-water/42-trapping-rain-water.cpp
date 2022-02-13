class Solution {
public:
    int trap(vector<int>& arr) {
        int i=0,j=arr.size()-1;
      
   int maxleft=0,maxright=0,result=0;
 
  while(i<j)
  {
      if(arr[i]<=arr[j])
      {
          maxleft=max(maxleft,arr[i]);
          result+=maxleft-arr[i];
          i++;
      }
      else
      {
          maxright=max(maxright,arr[j]);
          result+=maxright-arr[j];
          j--;
      }
  }
  return result;
    }
};