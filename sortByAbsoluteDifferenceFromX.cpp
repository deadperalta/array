//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    static bool comp(pair<int,int>&a,pair<int,int>&b)
    {
        if(a.first == b.first)
        {
            return a.second < b.second;
        }
        return a.first < b.first;
    }
    public:
    
    // A[]: input array
    // N: size of array
    //Function to sort the array according to difference with given number.
    void sortABS(int A[],int N, int k)
    {
       vector<pair<int,int>>ans;
       for(int i=0;i<N;i++)
       {
           ans.push_back({abs(A[i]-k),i});
       }
       
       sort(ans.begin(),ans.end(),comp);
       int arr[N];
       for(int i=0;i<N;i++)
       {
           arr[i]=A[ans[i].second];
       }
       for(int i=0;i<N;i++)
       {
           A[i]=arr[i];
       }
       //A=arr;
    }

};

//{ Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    
	    int N, diff;
	    cin>>N>>diff;
	    int A[N];
	    
	    for(int i = 0; i<N; i++)
	        cin>>A[i];
	   
	    Solution ob;
	   
	    ob.sortABS(A, N, diff);
	    
	    for(int & val : A)
	        cout<<val<<" ";
	    cout<<endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
