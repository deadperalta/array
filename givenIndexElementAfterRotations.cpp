//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends


class Solution{
  public:
    // Function to compute the element at
    // given index
    int findElement(int arr[], int n, int x, int ranges[][2], int k) {
          for(int i=k-1;i>=0;i--)
          {
            int left=ranges[i][0];
            int right=ranges[i][1];
        
            if(left <= x && right >= x)
            {
              if(left == x)
              {
                x = right;
              }
              else
              {
                x--;
              }
            }
          }
          return arr[x];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, k;
        cin >> n >> x >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int ranges[k][2];
        for (int i = 0; i < k; i++) {
            cin >> ranges[i][0] >> ranges[i][1];
        }
        Solution obj;
        auto ans = obj.findElement(arr, n, x, ranges, k);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends
