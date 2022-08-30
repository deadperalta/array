// { Driver Code Starts
//Initial Template for C++

// C++ implementation to rearrange the array 
// elements after modification 
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        void modifyAndRearrangeArr(int a[], int n) 
    { 
    	for(int i=0;i<n-1;i++)
    	{
    	    if(a[i]>0 && a[i+1]==a[i])
    	    {
    	        a[i]+=a[i];
    	        a[i+1]=0;
    	    }
    	}
    	int start=0;
    	for(int i=0;i<n;i++)
    	{
    	    if(a[i]>0)
    	    {
    	        int temp=a[i];
    	        a[i]=a[start];
    	        a[start]=temp;
    	        start++;
    	    }  
    	}
    }
}; 


// { Driver Code Starts.
// Driver program to test above 
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        ob.modifyAndRearrangeArr(arr, n);
        for(int i=0;i<n;i++)
            cout << arr[i] << " ";
        cout << endl;
        
    }

	return 0; 
} 
  // } Driver Code Ends
