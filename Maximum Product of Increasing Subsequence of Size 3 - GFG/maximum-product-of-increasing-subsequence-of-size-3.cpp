// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 



 // } Driver Code Ends


class Solution{
  public:
    vector<int> maxProductSubsequence(int *a , int n) 
    { 
        // Complete the function
        int left[n]={0},right[n]={0};
        vector<int>v;
        v.push_back(-1);
        if(n<3){return v;}
        
        left[0]=-1;
        right[n-1]=a[n-1];
        int  mx=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            right[i]=max(right[i+1],a[i]);
            // if(right[i]==0){right[i]=-1;}
        }
        
        set<long long >s;
    s.insert(a[0]);
            long long mxx=LONG_MIN;
        long long  res=LONG_MIN;
        for(int i=1;i<n;i++)
        {
            s.insert(a[i]);
            auto it=s.find(a[i]);
            if(it!=s.begin())
            {
                it--;
               left[i]=*it;
               if(left[i]<a[i]&&right[i]>a[i])
            {
                res=(long)left[i]*a[i]*right[i];
                if(res>=mxx){
                    mxx=res;
                   v={left[i],a[i],right[i]};
                }
            }
               
               
            }
        }

        // // for(int i=0;i<n;i++)
        // // {
        // //     cout<<left[i]<<" "<<a[i]<<" "<<right[i]<<endl;
        // // }
        // for(int i=1;i<n-1;i++)
        // { 
            
        // }
        return v;
        
    } 
     

};

// { Driver Code Starts.
// Driver Program 
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    
	    int num;
	    cin>>num;
	    int arr[num];
	    for(int i = 0; i<num; ++i)
	        cin>>arr[i];
	    
	    vector<int> res;
	    Solution obj;
	    res = obj.maxProductSubsequence(arr, num);
	    
	    if(res[0] == -1)
	        cout<<"Not Present\n";
	    else{
    	    for(int i = 0; i<3; ++i)
    	        cout<<res[i]<<" ";
    	    cout<<"\n";
	    }
	    
	}
} 
  // } Driver Code Ends