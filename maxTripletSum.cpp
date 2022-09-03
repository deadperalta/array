//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int maxTripletSum(int arr[], int n)
    {
    	int maxA = INT_MIN, maxB = INT_MIN, maxC = INT_MIN;
 
        for (int i = 0; i < n; i++) {
     
            // Update Maximum, second maximum and third
            // maximum element
            if (arr[i] > maxA) {
                maxC = maxB;
                maxB = maxA;
                maxA = arr[i];
            }
     
            // Update second maximum and third maximum
            // element
            else if (arr[i] > maxB) {
                maxC = maxB;
                maxB = arr[i];
            }
     
            // Update third maximum element
            else if (arr[i] > maxC)
                maxC = arr[i];
        }
     
        return (maxA + maxB + maxC);
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    Solution ob;
	    cout <<ob.maxTripletSum(a, n);
	    cout<<"\n";
	}
return 0;
}
// } Driver Code Ends
