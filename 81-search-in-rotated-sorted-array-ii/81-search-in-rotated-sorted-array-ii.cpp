class Solution {
public:
    bool search(vector<int>& a, int target) {
        int low = 0, high = a.size() - 1; 
        while(low <= high) {
            int mid = (low + high) >> 1; 
            if(a[mid] == target) return true; 
            
            
            if(a[low] < a[mid]) {
                if(target >= a[low] && target < a[mid]) {
                    high = mid ; 
                }
                else {
                    low = mid + 1; 
                }
            }
            else if(a[low]>a[mid]) {
                if(target > a[mid] && target <= a[high]) {
                    low = mid + 1; 
                }
                else {
                    high = mid ; 
                }
            }
            
            else{low++;}
        } 
        return false; 
    }
};