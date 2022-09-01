//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
    //we will divide al even number by 2 and odd numbers will be reduced by one, repeat until all become zero;
public:
    int countMinOperations(int arr[], int n) {
       int res=0;
       
       while(1)
       {
           int zc=0;
           int i;
           
           for(i=0;i<n;i++)
           {
               if(arr[i] & 1)
               {
                   break;
               }
               else if(arr[i] == 0)
               {
                   zc++;
               }
           }
           
           if(zc == n)
           {
               return res;
           }
           
           if(i == n)
           {
               for(int j=0;j<n;j++)
               {
                   arr[j]/=2;
               }
               res++;
           }
           
           for(int j=0;j<n;j++)
           {
               if(arr[j] & 1)
               {
                   res++;
                   arr[j]--;
               }
           }
       }
       return -1;
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
        auto ans = ob.countMinOperations(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
