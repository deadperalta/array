//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



// } Driver Code Ends

class Solution{
  public:
    void rearrangeArray(int arr[], int n) {
        vector<int>a;
        
        for(int i=0;i<n;i++)
        {
            a.push_back(arr[i]);
        }
        
        sort(a.begin(),a.end());
        
        int i=0,j=n-1;
        int k=0;
        
        while(i <= j)
        {
            if(k % 2 == 0)
            {
                arr[k]=a[i++];
            }
            else
            {
                arr[k]=a[j--];
            }
            k++;
        }
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
        Solution obj;
        obj.rearrangeArray(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
