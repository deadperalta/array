//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        int len=INT_MAX;
        int sum=0;
        int start=0;
        
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            
            if(sum > x)
            {
                while(sum > x)
                {
                    sum-=arr[start];
                    start++;
                }
                len=min(len,i-start+2);
            }
        }
        return len;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends
