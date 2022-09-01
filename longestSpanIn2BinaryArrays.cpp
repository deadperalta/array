//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int longestCommonSum(bool arr1[], bool arr2[], int n) {
        vector<int>arr;
        
        for(int i=0;i<n;i++)
        {
            arr.push_back(arr1[i]-arr2[i]);
        }
        
        int sum=0;
        unordered_map<int,int>freq;
        int maxlen=0;
        
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            
            if(sum == 0)
            {
                maxlen=i+1;       
            }
            
            if(freq.find(sum) == freq.end())
            {
                freq[sum]=i;
            }
            else
            {
                maxlen=max(maxlen,i-freq[sum]);
            }
        }
        return maxlen;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        bool arr1[n], arr2[n];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        auto ans = ob.longestCommonSum(arr1, arr2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
