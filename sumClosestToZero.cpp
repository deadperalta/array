//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            sort(arr,arr+n);
            
            if(arr[0] >= 0 && arr[1] >= 0)
            {
                return arr[0]+arr[1];
            }
            if(arr[n-1] <= 0 && arr[n-2] <= 0)
            {
                return arr[n-1]+arr[n-2];
            }
            
            int minDiff=INT_MAX;
            int sum=0;
            
            int i=0,j=n-1;
            
            while(i < j)
            {
                int s=arr[i]+arr[j];
                
                if(abs(s) < minDiff)
                {
                    sum=s;
                    minDiff=abs(s);
                }
                else if(abs(s) == minDiff)
                {
                    if(s > sum)
                    {
                        sum=s;
                    }
                }
                
                if(s > 0)
                {
                    j--;
                }
                else
                {
                    i++;
                }
            }
            return sum;
        }
        
};

//{ Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}
// } Driver Code Ends
