 // { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isSuperSimilar(int n, int m, vector<vector<int>>& mat, int x)
    {
        x=x%m;
        for(int i=0;i<n;i++)
        {
            vector<int>v;
            
            if(i % 2 == 0)
            {
                for(int j=x;j<x+m;j++)
                {
                    v.push_back(mat[i][j%m]);
                }
            }
            else
            {
                for(int j=m-x;j<2*m-x;j++)
                {
                    v.push_back(mat[i][j%m]);
                }
            }
            
            if(mat[i] != v)
            {
                return 0;
            }
        }
        return 1;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n*m;i++)
            cin>>mat[i/m][i%m];
        int x;
        cin >> x;
        
        Solution ob;
        cout<<ob.isSuperSimilar(n,m,mat,x)<<endl;
    }
    return 0;
}  // } Driver Code Ends
