//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        sort(arr,arr+n);
        int res=0;
        
        for(int i=n-1;i>=0;i--)
        {
            int j=0,k=i-1;
            
            while(j < k)
            {
                if(arr[i] < arr[j]+arr[k])
                {
                    res+=(k-j);
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        return res;
    }
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.findNumberOfTriangles(arr,n) <<endl;
    }
    return 0;
}
// } Driver Code Ends
