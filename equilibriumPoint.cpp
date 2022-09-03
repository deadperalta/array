//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string equilibrium(int *arr, int n) {
        if(n == 1)
        {
            return "YES";
        }
        
        for(int i=1;i<n;i++)
        {
            arr[i]=arr[i]+arr[i-1];
        }
        
        for(int i=1;i<n;i++)
        {
            if(arr[i-1] == arr[n-1]-arr[i])
            {
                return "YES";
            }
        }
        return "NO";
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.equilibrium(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
