//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    int solve(int i,int arr[],int n,int k,int prod,bool isthere)
    {
        if(i == n)
        {
            if(prod <= k && isthere)
            {
                return 1;
            }
            return 0;
        }
        
        int leave=solve(i+1,arr,n,k,prod,isthere);
        int take=0;
        
        if(arr[i]*prod <= k)
        {
            take=solve(i+1,arr,n,k,prod*arr[i],true);
        }
        return leave+take;
    }
  public:
    int numOfSubsets(int arr[], int N, int K) {
       return solve(0,arr,N,K,1,false);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>K;

        Solution ob;
        cout << ob.numOfSubsets(arr,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends
