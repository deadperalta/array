//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> printUnsorted(int arr[], int n) {
	    int st=0;
	    
	    for(int i=0;i<n-1;i++)
	    {
	        if(arr[i+1] < arr[i])
	        {
	            st=i; //3
	            break;
	        }
	    }
	    
	    int en=n-1;
	    
	    for(int i=n-1;i>0;i--)
	    {
	        if(arr[i-1] > arr[i])
	        {
	            en=i; //7
	            break;
	        }
	    }
	    
	    int maxi=INT_MIN,mini=INT_MAX;
	    
	    for(int i=st;i<=en;i++)
	    {
	        maxi=max(maxi,arr[i]); //40
	        mini=min(mini,arr[i]); //25
	    }
	    int start=st;
	    
	    for(int i=0;i<st;i++)
	    {
	        if(arr[i] > mini)
	        {
	            start=i; //3
	            break;
	        }
	    }
	    
	    int end=en;
	    for(int i=n-1;i>en;i--)
	    {
	        if(arr[i] < maxi)
	        {
	            end=i;
	            break;
	        }
	    }
	   // cout<<st<<" "<<en<<" "<<start<<" "<<end<<endl;
	    return {start,end};
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printUnsorted(arr, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

// } Driver Code Ends
