//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int minProduct(int arr[], int n, int k)
    {
        priority_queue<int>q;
        
        for(int i=0;i<n;i++)
        {
            q.push(arr[i]);
            
            if(q.size() > k)
            {
                q.pop();
            }
        }
        
        long long int ans=1;
        long long int mod=1e9+7;
        while(!q.empty())
        {
            ans=(ans*q.top())%mod;
            q.pop();
        }
        
        return ans%mod;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        cin>>k;
        Solution ob;
	    cout<<ob.minProduct(arr, n, k)<<endl;
    }
	return 0;
}

// } Driver Code Ends
