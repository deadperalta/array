//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
  public:
    int minDist(int arr[], int n, int x, int y) {
        int i=0;
        
        int dist=n;
        int st=-1;
        
        while(i < n)
        {
            if(arr[i] == x)
            {
                st=i;
            }
            else if(arr[i] == y)
            {
                if(st != -1)
                {
                    dist=min(dist,i-st);
                }
            }
            i++;
        }
        
        i=0;
        st=-1;
        
        while(i < n)
        {
            if(arr[i] == y)
            {
                st=i;
            }
            else if(arr[i] == x)
            {
                if(st != -1)
                {
                    dist=min(dist,i-st);
                }
            }
            i++;
        }
        if(dist == n)
        {
            return -1;
        }
        return dist;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends
