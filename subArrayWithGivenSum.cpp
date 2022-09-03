//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int start,st=0;
        long long int sum=0;
        
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            
            if(sum == s)
            {
                return {st+1,i+1};
            }
            
            if(sum > s)
            {
                while(st < i && sum > s)
                {
                    sum-=arr[st];
                    st++;
                }
                if(sum == s)
                {
                    return {st+1,i+1};
                }
            }
        }
        return {-1};
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
