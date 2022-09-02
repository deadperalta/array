//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
        long long required(long long arr[], long long n, long long k) {
        //priority_queue<long long int>q;
        
        long long int ans=0;
        long long int i=0;
        while(i < n)
        {
            if(arr[i] <= k)
            {
                i++;
                continue;
            }
            else
            {
                ans=max(ans,arr[i]-k);
                //k++;
                i++;
            }
        }
        if(ans == 0)
        {
            return -1;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long arr[n];
        for (long long i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        cout << ob.required(arr, n, k) << endl;
    }
    return 0;
}
// } Driver Code Ends
